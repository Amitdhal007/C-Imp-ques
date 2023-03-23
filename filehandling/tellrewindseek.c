#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("C:/Users/asitk/OneDrive/Documents/x.txt", "r");

    for (int i = 0; i < 10; i++)
    {
        printf("%c : %d\n", fgetc(ptr), ftell(ptr));
        if (i == 4)
        {
            fseek(ptr,0,SEEK_END);
            rewind(ptr);
        }
    }
    fclose(ptr);

    return 0;
}