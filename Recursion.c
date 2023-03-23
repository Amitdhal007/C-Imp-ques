#include <stdio.h>

int sum_of_all_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + sum_of_all_digit(n/10);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d ",sum_of_all_digit(n));
    return 0;
}