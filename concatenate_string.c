#include <stdio.h>

int main()
{

    char str1[100];
    char str2[100];

    printf("Enter str1: ");
    gets(str1);

    printf("Enter str2: ");
    gets(str2);

    int i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }

    for (int j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';

    printf("%s",str1);

    return 0;
}