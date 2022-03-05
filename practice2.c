#include<stdio.h>
#include<string.h>
int main(){
int a=0, b=1,c=0,n;
printf("Ente the number:");
scanf("%d",&n);
   int i= 0;
    while(c<=n){
        a=b;
        b=c;
        c=a+b;
       i++;
       
    }
     printf("%d",c);
  
    return 0;

}