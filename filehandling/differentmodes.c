#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("C:/Users/asitk/OneDrive/Documents/x.txt","w+");
    // a+ read from start but append end
    // r+ read and write from start and end remains same
    // w+ remove and write
    
    fputs("hello",ptr);
    return 0;
}
/*#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("C:/Users/asitk/OneDrive/Documents/x.txt","r+");
    
    fputc('h',ptr);
    return 0;
}*/