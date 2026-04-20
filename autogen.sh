#!/bin/sh
set -e

autoreconf -fi
./configure "$@"
make

exit 0
