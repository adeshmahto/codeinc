#include<stdio.h>
struct student{
    int roll;
    int marks[5];
};
int main(){
    struct student x[10];

    for(int i=0;i<5;i++){

        printf(" enter the marks for %d :",i);
        scanf("%d",&x[i].marks[i]);
         printf(" enter the roll no. %d :",i+1);
        scanf("%d",&x[i].roll);
    }
     for(int i=0;i<5;i++){
        printf("  the marks for %d is %d \n",i,x[i].marks[i]);
         printf("  the roll  for %d is %d \n",i+1,x[i].roll);
    }

    return 0;
}

