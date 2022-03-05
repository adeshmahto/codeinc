#include<stdio.h>
#include<Math.h>
int main (){
    int sum=0;
int dec=0;
int rec=0;
int j=0;
int i=1100;
int *ptr=&i;
while(*ptr!=0){
    rec=*ptr%10;
    dec=(pow(2,j)*rec);
    sum+=dec;
    *ptr=*ptr/10;
    j++;
}
printf("%d",sum);





    return 0;
}
