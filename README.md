# simpleDB

![CI](https://github.com/diohabara/simpleDB/workflows/CI/badge.svg)

mimic <https://github.com/cmu-db/bustub>

## Usage

```sh
bazel run //bin:format -- "${PWD}"
bazel test //... # test
```

## structure

- `bin`: utilities
- `src`: sources of this DB
- `test`: tests of this DB
