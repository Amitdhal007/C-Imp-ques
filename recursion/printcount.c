#include <stdio.h>

void printcount(int x)
{
    if (x == 0)
    {
        return;
    }

    // head recursion
    // printf("%d \n", x);

    printcount(x - 1);

    // tail recursion
    printf("%d \n", x);
}

int main()
{
    int x;
    printf("Enter num ");
    scanf("%d", &x);

    printcount(x);
}
