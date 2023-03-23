#include <stdio.h>

int main(){

    int size;
    scanf("%d",&size);

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c",(char)(49+i));
        }

        printf("\n");   
    }
    
    return 0;
}