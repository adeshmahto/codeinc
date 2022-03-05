#include<stdio.h>
#include<string.h>
#include<Math.h>
int main(){
int num,sum=0;
printf("enter the number:");
scanf("%d",&num);
for(int i =1;i<num;i++){
if (num%i==0){
    sum+=i;
}

}
if(num==sum){
    printf("%d its a perfect no.",num);
}
else
{
    printf("%d it is not perfect no.",num);
}


return 0;

}
