#include <stdio.h>
#include <string.h>

typedef float flt;

typedef struct Employee{

    int emp_id;
    char emp_name[50];
    flt salary;

} stp;

int main(){
    stp e2,e3;
    stp e1 = {23, "Akshay", 25000.0};
    e2.emp_id = 69;
    strcpy(e2.emp_name,"Anish");
    e2.salary = 30000.0;

    printf("Name of e1 %s",e1.emp_name);
    return 0;
}