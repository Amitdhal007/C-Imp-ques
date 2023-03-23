#include <stdio.h>

int main() {
  
    int nums[5];
    printf("\n Run-Time Initialization Example:\n");
    printf("\n Enter array elements: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", & nums[i]);
    }

    printf(" Accessing array elements after dynamic Initialization: ");

    for (int i = 0; i < 5; i++) {

        if (nums[i]%2 == 0)
        {
            printf("%d ", nums[i]);
        }
        
    }

    return 0;
}
