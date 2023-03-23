#include <stdio.h>
#include <stdlib.h>

int main()
{

    int size;
    scanf("%d", &size);
    
    int *arr;
    arr = (int *)malloc(size * sizeof(int));

    printf("\n Enter array elements: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // int arr[5] = {1,2,3,4,5};
    int start = 0;
    int end = size - 1;

    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
    }

    for (int j = 0; j < size; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}