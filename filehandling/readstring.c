#include <stdio.h>


int main()
{
    FILE *ptr = NULL;
    ptr = fopen("C:/Users/asitk/OneDrive/Documents/x.txt", "r");
    char c[15];
    fgets(c, 15, ptr);
    printf("the string is----->>>\n %s", c);
    return 0;
}