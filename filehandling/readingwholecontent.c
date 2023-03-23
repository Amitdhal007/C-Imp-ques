#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("C:/Users/asitk/OneDrive/Documents/x.txt", "r");
    while ((ch = fgetc(ptr)) != EOF)
    {
        printf("%c", ch);
    }

    return 0;
}