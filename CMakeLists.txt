cmake_minimum_required(VERSION 3.16)

project(BioCTest LANGUAGES C)

add_executable(bioc_test
  src/main.c
)

target_compile_options(bioc_test PRIVATE
  -Wall
  -Wextra
  -Wpedantic
)
