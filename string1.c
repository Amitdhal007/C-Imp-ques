#include <stdio.h>


int main(){

    char str1[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str1);

    for (int i = 0; str1[i]!='\0'; i++)
    {
        count++;
    }

    printf("your entered string and count: %s %d",str1,count);
    return 0;
}