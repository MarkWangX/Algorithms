#include<stdio.h>
#include<stdlib.h>
#include "QuickSort.h"

void PrintArray(int32_t arr[], int32_t size);

int32_t main(int32_t argc, char *argv[]){
    int32_t size = argc - 1;
    int32_t arr[size];

    for (int32_t i = 0; i < size; i++){
        arr[i] = atoi(argv[i+1]);
    }

    int32_t l = 0;
    int32_t h = size - 1;
    QuickSort(arr, l, h);
    PrintArray(arr, size);

    return 0;
}

void PrintArray(int32_t arr[], int32_t size){
    for (int32_t i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}