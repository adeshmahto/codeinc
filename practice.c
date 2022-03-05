#include<stdio.h>
#include<string.h>
int main(){
  int n1,n2,x,y,lcm,gcd;
  printf("Enter the two number:");
  
  scanf("%d %d",&n1,&n2);
  x=n1;
  y=n2;
  while(n1!=n2){
    if(n1>n2){
      n1=n1-n2;

    }
    else{
      n2=n2-n1;
    }
   
  }
   gcd=n1;
    printf("%d is the Gcd\n",gcd);
 
 
  lcm=(x*y)/gcd;
  printf("%d is the lcm",lcm);
 
 
return 0;
}                           