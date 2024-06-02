cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(cuda_labs LANGUAGES CUDA CXX)

set(SOURCES src/main.cpp src/cuda/mat_mul.cu)
set_source_files_properties(${SOURCES} PROPERTIES LANGUAGE CUDA)

add_executable(cuda_executable ${SOURCES})
