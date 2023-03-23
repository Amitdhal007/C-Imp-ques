#include <stdio.h>

int main()
{
    FILE* ptr;
    ptr = fopen("C:/Users/asitk/OneDrive/Documents/x.txt","r");
    if (ptr == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("file exist");
    }
    
    return 0;
}