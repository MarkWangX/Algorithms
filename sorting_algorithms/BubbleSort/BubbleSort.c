#include "BubbleSort.h"

int32_t BubbleSort(int32_t arr[], int32_t n){
    if (n <= 1){ 
        return 0;
    }
    for (int32_t i = 0; i < n - 1; i++){
            if (arr[i] > arr[i+1]){
                swap(&arr[i], &arr[i+1]);
            }
    }
    n--;
    return BubbleSort(arr, n);
}  

void BubbleSort2(int32_t arr[], int32_t n)
{
    int32_t flag;
    do
    {
        flag = 0;
        for(int32_t i = 0; i < n; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(&arr[i], &arr[i+1]);
                flag = 1;
            }
        }
    }while(flag);
}

void swap(int32_t *x, int32_t *y){
    int32_t temp;
    temp = *x;
    *x = *y;
    *y = temp;
}