#include <stdio.h>

int main(){
    
    // size of pattern
    int size;
    scanf("%d",&size);

    // main loop to print
    for (int i = size; i >= 1; i--)
    {
        for (int j = i; j <= size; j++)
        {
            printf("%c ",(char)(j+64));
        }

        printf("\n");   
    }

    return 0;
}
