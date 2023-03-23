#include <stdio.h>

int factorisation(int n)
{

    // base case
    if (n == 0)
    {
        return 1;
    }

    // recursive func
    int smallerproblem = factorisation(n-1);
    int biggerproblem = n*smallerproblem;
    //return n * factorisation(n - 1);

    return biggerproblem;

}

int main()
{

    int n;
    scanf("%d", &n);

    int ans = factorisation(n);

    printf("%d", ans);

    return 0;
}