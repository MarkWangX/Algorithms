#include "HeapSort.h"

void HeapSort(int32_t arr[], int32_t n){
    for (int32_t i = n / 2 - 1; i >= 0; i--){
        Heapify(arr, n, i);
    }
    
    for (int32_t i = n - 1; i > 0; i--){
        swap(&arr[0], &arr[i]);
        Heapify(arr, i, 0);
    }
}

void Heapify(int32_t arr[], int32_t n, int32_t i){
    int32_t largest = i;
    int32_t left = 2 * largest + 1;
    int32_t right = 2 * largest + 2;
    if (left < n && arr[left] > arr[largest]){
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]){
        largest = right;
    }

    if (largest != i){
        swap(&arr[i], &arr[largest]);
        Heapify(arr, n, largest);
    }
}

void swap(int32_t *x, int32_t *y){
    int32_t temp;
    temp = *x;
    *x = *y;
    *y = temp;
}