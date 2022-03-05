#include<stdio.h>
int Td(int [],int n);
int main (){
int arr[] ={22,1,333,44};
int n=4;
printf("%d",Td(arr,n));
    return 0;
}
int Td( int *arr,int n){
    int sum=0;
int j;
int temp;
for(int i=0;i<n;i++){
    j=0;
    temp=arr[i];
    while(arr[i]!=0){
        arr[i]=arr[i]/10;
        j++;
    }
    arr[i]=temp;
    if(j==2){
        sum+=arr[i];
    }
}
return sum;

}