#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv);

/// @brief Multiply 2 matrices and passes to matRet
/// @param matA The left matrix to multiply
/// @param matB The right matrix to multiply
/// @param matRet The result matrix
/// @return 0 if executed correctly, -1 otherwise
int multiplyMatrix(float **matA, float **matB, float **matRet);

/// @brief Returns the lowest number that is a
/// power of 2 and greater or equal to n
/// @param n Target number
/// @return Next power of two
int nextPowerOfTwo(int n);