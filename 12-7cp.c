#include<stdio.h>
#include<string.h>

int number(int );
int main(){
 
   int n=5;
   printf("the natural no. are");
   printf("%d",number(n));

   printf("\n");
return 0;
 }   

 int number(int n){
     int sum=0;
     if(n<=5){
         printf("%d", n);
         printf("\n");
       sum+=   number(n+1);
        
        return sum;
     }
 }

