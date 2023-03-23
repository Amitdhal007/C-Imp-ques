#include <stdio.h>

void sayDigit(int x, char *num[])
{
    if (x == 0)
    {
        return;
    }

    int digit = x % 10;
    x = x / 10;
    sayDigit(x, num);

    printf("%s ", num[digit]);
}

int main()
{
    int x;
    char *num[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("Enter num ");
    scanf("%d", &x);

    sayDigit(x, num);
}