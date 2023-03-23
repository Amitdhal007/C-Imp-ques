#include <stdio.h>

int main()
{

    int size;
    scanf("%d", &size);

    for (int i = 1; i <= (size/2)+1; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    for (int i = (size-1)/2; i >= 1; i--)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
