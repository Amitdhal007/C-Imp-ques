#include <stdio.h>
#include <stdbool.h>

bool isSorted(int size, char arr[])
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    { // this is for remaining part
        return isSorted(size - 1, arr + 1);
    }
}

int main()
{
    int size = 6;
    char arr[] = {1, 2, 5, 11, 9, 10};

    bool res = isSorted(size, arr);
    if (res)
    {
        printf("Sorted");
    }
    else
    {
        printf("Unsorted");
    }
}