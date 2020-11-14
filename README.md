# simpleDB

mimic https://github.com/cmu-db/bustub

## Usage

```sh
bazel run --run_under="cd $PWD &&" bin:format # format source codes
bazel test //... # test
```

## structure

- `bin`: utilities
- `src`: sources of this DB
- `lib`: library of this DB
- `test`: tests of this DB