#include<stdio.h>

int fibo(int n){
    if (n==0 || n==1)
    return n;
    else{
        return fibo(n-1)+fibo(n-2);
    }

}
int main(){
  
  int n;
  printf("enter the number :");
  scanf("%d",&n);
  
  printf("\nfibonacci series->\n");
  printf("%d",fibo(n));

    return 0;
}