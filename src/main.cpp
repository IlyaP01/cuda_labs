#include "cuda/mat_mul.cuh"

#include <iostream>

int main(int agrc, char* argv[])
{
    cuda_hello<<<1, 1>>>();
    return 0;
}
