#include<stdio.h>
#include<stdlib.h>
#include "BubbleSort.h"

void PrintArray(int32_t arr[], int32_t size);

int32_t main(int32_t argc, char *argv[]){
    int32_t size = argc - 1;
    int32_t arr[size];

    for (int32_t i = 0; i < size; i++){
        arr[i] = atoi(argv[i+1]);
    }

    BubbleSort(arr, size);
    PrintArray(arr, size);

    return 0;
}

void PrintArray(int32_t arr[], int32_t size){
    for (int32_t i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}