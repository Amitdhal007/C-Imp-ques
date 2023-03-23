#include <stdio.h>

int powerof2(int x)
{
    if (x == 0)
    {
        return 1;
    }

    return 2 * powerof2(x - 1);
    
}

int main()
{
    int x;
    printf("Enter power ");
    scanf("%d", &x);

    int ans = powerof2(x);

    printf("%d", ans);
}