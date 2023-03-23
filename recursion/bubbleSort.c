#include <stdio.h>

void sortArray(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return;
    }

    // for 1 element
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // recursion call
    sortArray(arr,size-1);
}

int main()
{
    int arr[] = {5, 6, 3, 7, 2, 1, 9};
    int size = 7;

    sortArray(arr, size);

    // printing array
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}