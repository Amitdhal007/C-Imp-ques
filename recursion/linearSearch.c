#include <stdio.h>
#include <stdbool.h>

bool LinerSearch(int size, int arr[], int key)
{
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return LinerSearch(size - 1, arr + 1, key);
    }
}

int main()
{
    int size = 6;
    int arr[] = {9, 7, 4, 2, 6, 44};
    int x = 9;

    bool res = LinerSearch(size, arr, x);
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