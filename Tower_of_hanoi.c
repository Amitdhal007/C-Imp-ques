#include <stdio.h>


void tower_of_hanoi(int n,char source,char destination,char helper){
    if ( n == 1)
    {   
        printf("Move disk %d from %c to %c\n",n,source,destination);
       return;
    }
    else
    {
        tower_of_hanoi(n-1,source, helper, destination);
        printf("Move disk %d from %c to %c\n",n,source,destination);
        tower_of_hanoi(n-1,helper, destination,source);

    } 
}
int main(){
    int X = 4;
    char A,B,C;
    tower_of_hanoi(X,'A','C','B');
    return 0;
}