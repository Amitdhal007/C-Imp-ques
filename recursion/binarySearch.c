#include <stdio.h>
#include <stdbool.h>

bool BinarySearch(int start, int end, int arr[], int key)
{
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] > key)
    {
        return BinarySearch(start, mid - 1, arr, key);
    }
    else
    {
        return BinarySearch(mid + 1, end, arr, key);
    }
}

int main()
{
    int size = 6;
    int start = 0;
    int arr[] = {2, 4, 6, 8, 12, 18};
    int key = 2;

    bool res = BinarySearch(start, size - 1, arr, key);
    if (res)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }

    return 0;
}