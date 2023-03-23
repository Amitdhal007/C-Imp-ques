#include <stdio.h>
#include <string.h>

void reverseString(char x[], int start, int end)
{

    // base case
    if (start > end)
    {
        return;
    }

    // swaping of first and last element
    int temp = x[start];
    x[start] = x[end];
    x[end] = temp;
    start++;
    end--;

    // recursive function
    reverseString(x, start, end);
}

int main()
{

    char x[] = "AmitKumarDhal";
    int len = strlen(x);
    int start = 0;
    int end = len - 1;

    reverseString(x, start, end);
    printf("%s", x);
    return 0;
}