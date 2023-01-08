#ifndef search_algos
#define search_algos
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print (int *array, size_t low, size_t high);
int recursive (int *array, size_t low, size_t high, int value);

#endif
