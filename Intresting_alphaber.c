#include <stdio.h>

int main(){
    // size of pattern
    int size;
    scanf("%d",&size);

    // main loop to print
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",(char)(i+65)-j);
        }

        printf("\n");   
    }

    return 0;
}