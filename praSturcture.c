#include<stdio.h>
struct employee{
    int code;
    int salary;
    char name[10];
};
int main(){
    struct employee e1={22,33,"adesh"} ;
    
    printf("%d",e1.salary);
    printf("%d",e1.code);
    printf("%s",e1.name);


    return 0;
}