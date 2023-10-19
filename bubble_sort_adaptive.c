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
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // for number of pass
    { 
        printf("Working on pass number %d\n", i+1);
        for (int j = 0; j < n - 1 - i; j++) // for number of comparision in each passes
        {
            if (A[j] > A[j + 1]){ // comparing the first element of array with the next element of the given array.

          //swaping the element of array if first ele is greater then the next one.
          
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
void bubblesortAdative(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // for number of pass
    {
        printf("Working on pass number %d\n",i+1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // for number of comparision in each passes
        {
            if (A[j] > A[j + 1]){ // comparing the first element of array with the next element of the given array.

          //swap the element of array if first ele is greater then the next one.
          
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;

                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
    }
}
int main()
{
    // int A[] = {12, 54, 65, 7, 23, 9};
    // int A[] = {12, 354,5 ,67 ,88 ,90, 65, 7, 23, 9};
    // int A[] = {1,5,4,7,9,0,6};
    int A[] = {1,5,4,7,11,13,15};
    int n = 7;
    
    printArray(A, n); // printing the array before sorting
    bubblesort(A, n); // function to sort the array
    printArray(A, n); // printing the array before sorting
    return 0;
}