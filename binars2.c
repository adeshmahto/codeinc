#include<stdio.h>

void main(){
     
    int arr[10],n,key;
    printf("enter the len with 10:");
    scanf("%d",&n);
    printf("enter the %d number for array",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be search:");
    scanf("%d",&key);
    int low=0;
    int high=n-1;
    int mid;
    int find;
    while(low<=high){

        mid=(high+low)/2;

        if(key<arr[mid]) high=mid-1;
        else if(key>arr[mid]) low=mid+1;
        else{
          printf("%d is loc of the number %d",mid,key);
          break;
            
        }
    }




}