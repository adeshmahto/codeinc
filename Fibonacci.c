#include<stdio.h>

void fibo(int);

int main (){

int n;
printf("enter the no. of terms");
scanf("%d",&n);
fibo(n);

return 0;

}  
void fibo(int n){
int c,i,a=0,b=1;
printf("the series is");
printf("%d %d ",a,b);
for(i=2;i<n;i++){
c=a+b;
a=b;
b=c;
printf("%d ",c);

}

}