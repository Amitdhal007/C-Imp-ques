#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int *ptr;
    int sum = 0;
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    for (int j = 0; j < n; ++j)
    {
        ptr[j] = j + 1;
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + ptr[i];
    }

    printf("%d", sum);

    return 0;
}