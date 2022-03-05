#include<stdio.h>
int main(){
int arr[]={1,2,3,4,5},key;
printf("Enter the search no.:");
scanf("%d",&key);
int i=0,n=5,low=0,high=4,temp;
int mid;
while(i<n){
    mid=high+low;
    if(key<arr[mid]){
        high=mid-1;
    }
   else if(key>arr[mid]){
        low=mid+1;
    }
    else{
     temp=mid;
    }
    i++;
}
if(temp==0)
printf("BEST case: in the location of %d",temp);
else if(temp==n)
printf("Worst case: in the location of %d",temp);
else{
    printf("avg case in the location of %d",temp);
}
    return 0;
}