#include<stdio.h>
int main (){
    int fac=1;
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    for(int i =1;i<=n;i++){

        fac*=i;
    }
    printf("the factorial of the given number %d is %d ", n,fac);





    return 0;
}