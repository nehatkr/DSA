#include <stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
//    keep searching until low <= high 
    low= 0;
    high=size-1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
   
    return -1;
}

// linear search is for unshorted array
// Binary search is for shorted array

int main(){
    
//   unsorted array for binary search
//     int arr[] = {1, 3, 5, 56, 4, 3, 23, 5, 4, 54634, 56, 34};
//     int size = sizeof(arr) / sizeof(int);

//    unsorted array for binary search
    int arr[] = {1, 3, 5,56,64,73,123,225,444};
    int size = sizeof(arr) / sizeof(int);
    int element = 123;
    int searchIndex = binarysearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}