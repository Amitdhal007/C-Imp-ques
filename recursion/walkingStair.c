#include <stdio.h>

int distinctWaysToReachStairs(int x)
{
    if (x < 0)
    {
        return 0;
    }
    if (x == 0)
    {
        return 1;
    }

    int ans = distinctWaysToReachStairs(x - 1) + distinctWaysToReachStairs(x - 2);
}

int main()
{
    int x;
    printf("Enter no of stair ");
    scanf("%d", &x);

    int ways = distinctWaysToReachStairs(x);

    printf("Number of ways to reach %dth stair is %d",x,ways);
}