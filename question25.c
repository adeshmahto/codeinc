#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
int num;
float sum=0.0,fact;
printf("Enter the no. of term:");
scanf("%d",&num);

while(num<=7){
    fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    sum=sum+(num / fact);
    num++;
}     
printf("the sum of the series:%f",sum);   
 return 0;
}