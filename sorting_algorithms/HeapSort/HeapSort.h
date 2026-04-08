#ifndef HEAPSORT_H
#define HEAPSORT_H

#include<stdint.h>

void HeapSort(int32_t arr[], int32_t n);
void Heapify(int32_t arr[], int32_t n, int32_t i);
void swap(int32_t *x, int32_t *y);

#endif