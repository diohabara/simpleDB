#!/usr/bin/env sh
buildifier -r .
clang-format -i src/*.cc
