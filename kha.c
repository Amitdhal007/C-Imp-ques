#include <stdio.h>

//  void func(int []);
// void func(int a[]){
//     printf("%lu",sizeof(a)/sizeof(a[0]));
// } 
int main(){

    //   double *ptr
    int i =0;
    do{
        i++;
        if(i<=3) continue;
        printf("In loop");

    }while(i<3);
        printf("%d\n",i);
    
    
    return 0;
}