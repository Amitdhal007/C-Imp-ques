#include <stdio.h>
#include <stdlib.h>

int main(){

    int row,col;
    scanf("%d %d",&row,&col);

    // 2d array memory allocation
    // int *arr = malloc((row*col)*sizeof(int));
    int *arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}