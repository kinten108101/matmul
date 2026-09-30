#include <strassen.h>

const int DEFAULT_OMP_NUM_THREADS = 10;

nextPowerOfTwo(int n)
{
    return pow(2, ceil(log2(n)));
}

int main(int argc, char **argv)
{
    //     if (argc >= 2)
    //     {
    //         omp_set_num_threads(atoi(argv[1]));
    //     }
    //     else
    //     {
    //         omp_set_num_threads(DEFAULT_OMP_NUM_THREADS);
    //     }

    // #pragma omp parallel
    //     {
    //         printf("Hello World... from thread = %d\n",
    //                omp_get_thread_num());
    //     }

    printf("Test nextPowerOfTwo: ", nextPowerOfTwo(10));
    printf("Test nextPowerOfTwo: ", nextPowerOfTwo(10));

    return 0;
}
