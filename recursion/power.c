#include <stdio.h>

int power(int x, int y)
{

    if (y == 0)
    {
        return 1;
    }

    if (y == 1)
    {
        return x;
    }

    int ans = power(x, y / 2);

    if (y % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return x * ans * ans;
    }
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int ans = power(x, y);

    printf("Answer is %d", ans);
}