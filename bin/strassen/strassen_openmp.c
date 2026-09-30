#include "../../headers/strassen/strassen.h"

int nextPowerOfTwo(int n)
{
    return pow(2, ceil(log2(n)));
}

// float **resizeMatrix(float **matIn, float **matOut, int newR, int newC)
// {
// }

int main(int argc, char **argv)
{
    // #pragma omp parallel
    //     {
    //         printf("Hello World! Thread no. %d\n", omp_get_thread_num());
    //     }

    //     printf("Test nextPowerOfTwo: %d\n", nextPowerOfTwo(10));
    //     printf("Test nextPowerOfTwo: %d\n", nextPowerOfTwo(-1));

    omp_set_num_threads(4);

#pragma omp parallel for
    for (int i = 0; i < 16; i++)
    {
        printf("Thread number %d, i = %d\n", omp_get_thread_num(), i);
    }

    return 0;
}
