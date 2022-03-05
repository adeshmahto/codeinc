#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int num=1;
    float sum =0.0, fact;
    while(num<=50){
        fact=1;
        for(int j=1;j<=num;j++){
            fact=j*j;
        }
    sum=sum+(1/fact);
    num++;
    }
    printf("%f",sum);

    return 0;
}