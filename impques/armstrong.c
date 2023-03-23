#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    scanf("%d", &n);
    int temp = n;
    int sum = 0;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }

    if (temp == sum)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong");
    }

    return 0;
}