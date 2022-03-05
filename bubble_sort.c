#include<stdio.h>
int  main (){
    int n,arr[20],temp;
    printf("Enter the len of array:");
    scanf("%d",&n);
    printf("Enter the number in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }

    printf("**********sorted array************\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}