#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("C:/Users/asitk/OneDrive/Documents/x.txt","r");
    char c = fgetc(ptr);
    printf("the first character is %c",c);
    return 0;
}