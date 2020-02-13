# Volkswagen C++

[![Build Status](https://travis-ci.org/elnormous/volkswagencpp.svg?branch=master)](https://travis-ci.org/elnormous/volkswagencpp) [![Build Status](https://dev.azure.com/elnormous/volkswagencpp/_apis/build/status/elnormous.volkswagencpp?branchName=master)](https://dev.azure.com/elnormous/volkswagencpp/_build/latest?definitionId=6&branchName=master)

Volkswagen C++ makes your tests pass when run on a CI server.

# Usage

Just include `volkswagen.hpp` in any of your translation units (source files).

The following CI's are detected:
* AppVeyor
* Azure pipelines
* Bamboo
* Bitbucket Pipelines
* Buildkite
* CircleCI
* Codeship
* Drone.io
* GitLab CI
* GoCD
* Hudson
* Jenkins CI
* Magnum CI
* Semaphore CI
* TaskCluster
* TeamCity
* Travis CI
* Any other CI that sets the `CI` or `CONTINUOUS_INTEGRATION` environment variable

# Credits
Inspired by https://github.com/hugues-m/phpunit-vw and https://github.com/auchenberg/volkswagen