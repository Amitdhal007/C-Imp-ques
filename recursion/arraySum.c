#include <stdio.h>

int returnSum(int size, int arr[])
{
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }
    

    int sum = arr[0];
    sum = sum + returnSum(size - 1, arr + 1);
    return sum;
}

int main()
{
    int size = 1;
    int arr[] = {9};

    int res = returnSum(size, arr);
    printf("%d", res);
    return 0;
}

/*
#include <stdio.h>

int returnSum(int size, int arr[])
{
    if (size == 0)
    {
        return 0;
    }

    int sum = arr[0];
    sum = sum + returnSum(size - 1, arr + 1);
    return sum;
}

int main()
{
    int size = 4;
    int arr[] = {1, 3, 7, 9};

    int res = returnSum(size, arr);
    printf("%d", res);
}
*/