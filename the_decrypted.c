#include <stdio.h>
#include<string.h>

 typedef struct employee{
    int code;
    float salary;
    char name[45];
} emp;
void show(emp emp1){
    printf("the code of employee is :%d\n",emp1.code);
    printf("the salary of employee is :%f\n",emp1.salary);
    printf("the name of employee is :%s\n",emp1.name);
}
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    ptr->code=133;
    ptr->salary=133.5;
    strcpy(ptr->name,"Adesh mahto");
    show(e1);
    return 0;
} 