#!/usr/bin/env sh
buildifier -r .
clang-format -i -style=Google **/*.cc **/*.h
