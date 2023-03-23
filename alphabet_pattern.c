#include <stdio.h>

int main(){

    int size;
    scanf("%d",&size);
    
    for (int i = size; i >= 1; i--)
    {
        for (int j = i; j <= size; j++)
        {
            printf("%c",(char)(64+j));
        }

        printf("\n");   
    }
    
    return 0;
}