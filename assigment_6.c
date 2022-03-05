#include<stdio.h>

int main (){
   
        int n=53;
        int r=0;
        int sum=0;
do{
      r=n%10;
        
        sum=sum+r; 
        n=n/10;



}while(n>0);


      printf("%d", sum);





    return 0;
}