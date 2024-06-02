#include "mat_mul.cuh"

#include <iostream>

__global__ void cuda_hello()
{
    std::cout << "Hello from GPU" << std::endl;
}
