#include<stdio.h>
int main(){

int n,arr[20],key,j;
  printf("Enter the len of array:");
    scanf("%d",&n);
    printf("Enter the number in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j=j-1;           //j==-1
        }
        arr[j+1]=key;
    }

    printf("**********sorted array************\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}