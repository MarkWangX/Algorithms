#include "QuickSort.h"

int32_t Partition(int32_t arr[], int32_t l, int32_t h){
    int32_t i = l - 1;
    int32_t pivot = arr[h];
    for (int32_t j = l; j <= h - 1; j++){
        if (arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[h]);
    return (i+1);
}

void QuickSort(int32_t arr[], int32_t l, int32_t h){
    if (l < h){
        int32_t p = Partition(arr, l, h);
        QuickSort(arr, l, p - 1);
        QuickSort(arr, p + 1, h);
    }
}

void swap(int32_t *x, int32_t *y){
    int32_t temp;
    temp = *x;
    *x = *y;
    *y = temp;
}