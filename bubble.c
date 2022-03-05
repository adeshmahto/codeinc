#include<stdio.h>
int main(){
    int n,i,j,t,a[10],f=1;
    printf("enter  the number of elements of array fo bubble sort:");
    scanf("%d",&n);
    printf("enter the element :");
    for(i=0;i<n && f==1;i++){
        scanf("%d",&a[i]);}
        f=0;
        for(j=0;j<(n-1)-i;j++){
            if(a[j]>a[j+1]){

                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                f=1;
            }
        }
    
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }





    return 0;
}