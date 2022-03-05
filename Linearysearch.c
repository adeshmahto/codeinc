#include<stdio.h>
#include<stdlib.h>

int main(){

    int arr[10],i,n,it,f1=0;
    printf("\n enter the len with in 10:");
    scanf("%d",&n);
    printf("\n enter %d number for array ",n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n enter the a number to search:");
    scanf("%d",&it);
    for(i=0;i<n;i++){
        if(arr[i]==it){
            f1=1;
            break;
        }
    }
    if(f1==0) printf("\n element is not there");
    else{
        if(i==0) printf(" \nthis is best case:");
        else if(i==n-1) printf("this is worst case:");
        else printf("\n it is avg case:");
        printf("\n%d is the number present in %d location",it,i+1);

    }

    return 0;
}