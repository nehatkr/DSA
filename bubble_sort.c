#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
}

void bubblesort(int *A, int n)
{
    for (int i = 0; i < n - 1; i++) // for number of pass
    {
        for (int j = 0; j < n - 1 - i; j++) // for number of comparision in each passes
        {
            if (A[j] > A[j + 1]){ // comparing the first element of array with the next element of the given array.

          //swaping the element of array if first ele is greater then the next one.
          
               int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                printArray(A,n);
            }
        }
        printArray(A,n);
    }
}
int main()
{
    // int A[] = {12, 54, 65, 7, 23, 9,0};
    int A[] = {12,4,2,1};
    int n = 4;
    
    printArray(A, n); // printing the array before sorting
    bubblesort(A, n); // function to sort the array
    printArray(A, n); // printing the array before sorting
    return 0;
}