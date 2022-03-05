#include<stdio.h>
#include<string.h>
int bs(int [],int);
int main (){
    int arr[45]={1,2,3,4,5,6,7,8};
    int n=8;
   printf("%d", bs(arr,n));
    return 0;
}
int  bs(int arr[],int n){
int heigh=n-1;
int low=0;
int key=2;
int mid=0;
while(low<=heigh){
    mid=(low+heigh)/2;
    if(key>arr[mid]){
        low=mid+1;
    }
    else if(key<arr[mid]){
        heigh=mid-1;
    }
    else if(key==arr[mid]){
        //printf("location found %d",mid);
        return mid;
       // break;
    }
}
}