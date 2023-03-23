
#include <stdio.h>

int fibbonacci(int x)
{
    if (x == 0)
    {
        return 0;
    }

    if (x == 1)
    {
        return 1;
    }

    int ans = fibbonacci(x - 1) + fibbonacci(x - 2);

    return ans;
}

int main()
{
    int x;
    printf("Enter num ");
    scanf("%d", &x);

    int y = fibbonacci(x);
    printf("%d", y);
}