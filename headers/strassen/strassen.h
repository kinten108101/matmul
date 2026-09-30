#ifndef STRASSEN_H
#define STRASSEN_H

#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float **resizeMatrix(float **matIn, float **matOut, int newR, int newC);

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

#endif