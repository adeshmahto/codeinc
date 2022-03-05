#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
     int a,n;
     double d; int sum=0;                  //d is comman ratio,a is first value, n is nth term.
 
  printf("Enter the first value:");
 scanf("%d",&a);
 printf("Enter the number of term:");
  scanf("%d",&n);
  printf("Enter the comman diffrence:");
  scanf("%d",&d);
  for(;;){
      sum =a*pow(d,n-1);
    
     

  }
  printf("%d",sum);

    return 0;
}