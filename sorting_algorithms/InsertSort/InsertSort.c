#include "InsertSort.h"

void InsertSort(int32_t arr[], int32_t size){
    for (int32_t i = 1; i < size; i++){
        int32_t key = arr[i];
        int32_t j = i - 1;

        while(j >= 0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void swap(int32_t *x, int32_t *y){
    int32_t temp;
    temp = *x;
    *x = *y;
    *y = temp;
}