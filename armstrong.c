#include<stdio.h>
#include<Math.h>
int  ams(int);
int main (){

   int x= ams(370);
    if(x==1){
        printf("it is a amstg no.");

    }
    else
    printf("it is not");


    return 0;
}
int  ams(int num){
    int sum=0;
    int n=0;
    int r;
    int org=num;
    int i=num;
    while(i>0){
        n++;
        i=i/10;
    }
    while(num>0){
        r=num%10;
        sum+=pow(r,n);
        num=num/10;
    }
    num=org;
    if(sum==num){
      return 1;

    }else{
        return 0;
    }

    
}