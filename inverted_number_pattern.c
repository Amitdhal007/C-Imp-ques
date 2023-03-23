#include <stdio.h>


int main(){

    int size;
    scanf("%d",&size);

    for (int i = size; i >= 1; i--)
    {
        for (int k = 1; k <= i; k++)
        {
            printf("%c",(char)(48+i));
        }
        printf("\n");
    }
    
    return 0;
}