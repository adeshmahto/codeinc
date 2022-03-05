#include<stdio.h>
int main(){
for(int i=1;i<=5;i++){
   int  k=9;
    for(int j=5;j>=i;j--){
        printf("%d",k);
        k=k-2;
    }
    printf("\n");
}return 0;
}