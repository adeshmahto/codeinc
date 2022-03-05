#include<stdio.h>
int  main (){
    int n,arr[20],temp;
    printf("Enter the len of array:");
    scanf("%d",&n);
    printf("Enter the number in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min;
    for(int i=0;i<n-1;i++){
        min=i;                     // here suppose we have max value at i!
        for(int j=i+1;j<n;j++){
           if(arr[j]<arr[min]){
               min=j;
           }
        }
         temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
    }

    printf("**********sorted array************\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}