#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int n=10;
    float sum= 0.0;
    
    for(int i=1;i<n*2;i+=2){         
    sum=sum+(pow(i,2)/pow(i,3));
    }
printf("%f",sum);
    return 0;
}