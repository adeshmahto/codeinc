#include<stdio.h>
#include<string.h>

int fact(int );
int main(){
   int n=5;
   printf("thefactorial no. are");
   printf("%d",fact(n));
return 0;
 }   

 int fact(int n){
    if (n==1||n==0){
      return 1;

    }
    return n*fact(n-1);
 }

