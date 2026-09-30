#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

const int DEFAULT_OMP_NUM_THREADS = 10;

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		omp_set_num_threads(atoi(argv[1]));
	}
	else
	{
		omp_set_num_threads(DEFAULT_OMP_NUM_THREADS);
	}

	#pragma omp parallel
	{
		printf("Hello World... from thread = %d\n",
					 omp_get_thread_num());
	}

	return 0;
}
