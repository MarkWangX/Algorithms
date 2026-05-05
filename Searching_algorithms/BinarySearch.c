#include <stdint.h>

int32_t BinarySearch1(int32_t arr[], int32_t target, int32_t low, int32_t high)
{
    if (low > high) 
    {
        return -1;
    }
    int32_t middle = low + (high - low) / 2;
    if (arr[middle] < target) { 
        return BinarySearch1(arr, target, middle + 1, high); 
    }
    else if (arr[middle] > target) { 
        return BinarySearch1(arr, target, low, middle - 1); 
    }
    else {
        return middle; 
    }
}

int32_t BinarySearch2(int32_t arr[], int32_t target, int32_t low, int32_t high)
{
    int32_t middle;
    while(high>=low)
    {
        middle = (high + low) / 2;
        if (arr[middle] == target) { 
            return middle; 
        }
        else if (arr[middle] < target) { 
            low = middle + 1;
        }
        else {
            high = middle - 1; 
        }        
    }
    return -1;
}