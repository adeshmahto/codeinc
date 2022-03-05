#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int num=1,x,sign=-1;
    float sum=0.0 ;
    int n=5;
    x=2;
    for(int i=1;i<n;i*=2){
        float fact=1;
        for(int j=1;j<=i;j++){
            fact=fact*j;   
            sum= sum+(sign*(pow(x,i)/fact));
            sign=sign*(-1);
         
        }
         
    }
    printf("%f",sum);
    
    
    return 0;
}