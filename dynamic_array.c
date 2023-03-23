#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *nums;
    int n = 5;
    nums=(int*)malloc(n*sizeof(int));
    
    printf("\n Enter array elements: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", & nums[i]);
    }

    printf(" Accessing array elements after dynamic Initialization: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }

    // printf("%d",nums[3]);

    return 0;
}
