#!/bin/bash
set -eux
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

# Wrapper script around the actual ones used in CI
# Intended only for legacy/manual use in event of failure in CI
# Ensure to add dependencies, e.g. for Ubuntu 22.04: awscli git createrepo-c debsigs aptly rsync

export BASE_PATH=${BASE_PATH:-$1}
export DISABLE_SIGNING=${DISABLE_SIGNING:-false}
export CREATE_REPO_CMD=${CREATE_REPO_CMD:-}
export CREATE_REPO_ARGS=${CREATE_REPO_ARGS:--dvp}
# Must be set for signing
if [[ "$DISABLE_SIGNING" != "false" ]]; then
    export GPG_KEY=${GPG_KEY:?}
fi

# Set these to force a manual S3 sync and update
# AWS_SYNC=true
# AWS_S3_BUCKET_RELEASE=packages.fluentbit.io
# AWS_S3_BUCKET_STAGING=fluentbit-staging
export AWS_REGION=${AWS_REGION:-us-east-1}

RPM_REPO_PATHS=("amazonlinux/2" "amazonlinux/2022" "centos/7" "centos/8" "centos/9")

if [[ "${AWS_SYNC:-false}" != "false" ]]; then
    aws s3 sync s3://"${AWS_S3_BUCKET_RELEASE:?}" "${BASE_PATH:?}"
fi

for RPM_REPO in "${RPM_REPO_PATHS[@]}"; do
    export RPM_REPO

    if [[ "${AWS_SYNC:-false}" != "false" ]]; then
        aws s3 sync s3://"${AWS_S3_BUCKET_STAGING:?}/$RPM_REPO" "${BASE_PATH:?}/$RPM_REPO"
    fi

    /bin/bash "$SCRIPT_DIR/update-yum-repo.sh"
done

DEB_REPO_PATHS=( "debian/bookworm"
                 "debian/bullseye"
                 "debian/buster"
                 "ubuntu/xenial"
                 "ubuntu/bionic"
                 "ubuntu/focal"
                 "ubuntu/jammy"
                 "raspbian/buster"
                 "raspbian/bullseye" )

for DEB_REPO in "${DEB_REPO_PATHS[@]}"; do
    export DEB_REPO
    if [[ "${AWS_SYNC:-false}" != "false" ]]; then
        aws s3 sync s3://"${AWS_S3_BUCKET_STAGING:?}/$DEB_REPO" "${BASE_PATH:?}/$DEB_REPO"
    fi
    /bin/bash "$SCRIPT_DIR/update-apt-repo.sh"
done

if [[ "${AWS_SYNC:-false}" != "false" ]]; then
    # Final review, do not push until checked manually
    aws s3 sync "${BASE_PATH:?}" s3://"${AWS_S3_BUCKET_STAGING:?}" --exact-timestamps --dryrun
fi
