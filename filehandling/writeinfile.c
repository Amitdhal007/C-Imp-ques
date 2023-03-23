#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("C:/Users/asitk/OneDrive/Documents/x.txt", "w");

    // writing in file

    fputc('x', ptr);
    fputs("Tommorrow is my exam", ptr);
    return 0;
}