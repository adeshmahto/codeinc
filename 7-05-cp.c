#include<stdio.h> // binary search
int main (){

    int arr[30]={1,2,3,4,5,6,7,8},start,end,n,mid,i=1,item;


    item =1;
    n=8;
    start =0,end=n-1;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]== item){
            printf("item found at mid ");
           break ;
        }
        else if( item>arr[mid])
        start = mid+1;
        else
        end =mid-1;
         
    }
     printf("%d is found at position %d",item,mid);


    return 0;
}