#include<stdio.h>
int main (){
    int even,odd;
    int a[10],i,sum=0;
    printf("enter the number:");
    for(int i=0;i<10;i++){
        printf("enter the number:");
        scanf("%d",a[i]);}
        for(int i=0;i<10;i++ ){

if(a[i]%2==0){
    even=a[i];
    printf("it is even");
}else{
    printf("it is odd");
} 
 }

    return 0;
}