
#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];

};
int main(){
    struct employee e1;
    struct employee *ptr=&e1;
    (*ptr).code=1244;
    //ptr->code=455;//*ptr is equal to the e1
    printf("the code of the employee is %d",(*ptr).code);
    return 0;
}

