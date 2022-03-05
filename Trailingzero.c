#include<stdio.h>
int main(){
    int a=6;                          // factorial
    int res=0;
    for(int i=5;i<=a;i=i*5){
        res=res+a/i;
    }
    printf("%d",res);



    return 0;
}