
#include<stdio.h>
#include<string.h>

 typedef struct employee{
    int code;
    float salary;
    char name[45];

}emp;

void show(emp emp1){
    printf("the value of code of e1 is :%d\n",emp1.code);
    printf("the value of salary of e1 is :%f\n",emp1.salary);
    printf("the value of name of e1 is :%s\n",emp1.name);

}
int main(){
    struct employee e1;
    struct employee *ptr=&e1;
    ptr->code=24;
    ptr->salary=24.56;
    strcpy(ptr->name,"adesh");
    show( e1);
    return 0;

}