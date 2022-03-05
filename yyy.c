
#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[45];

};

void show(struct employee emp){
    printf("the value of code of e1 is :%d\n",emp.code);
    printf("the value of salary of e1 is :%f\n",emp.salary);
    printf("the value of name of e1 is :%s\n",emp.name);

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