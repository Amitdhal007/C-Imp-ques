#include <stdio.h>


int main(){

    int size;
    scanf("%d",&size);

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%c",(char)(48+k));
        }
        printf("\n");
        
    }
    
    return 0;
}