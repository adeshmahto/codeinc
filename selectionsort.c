#include<stdio.h>
int main (){
        int arr[]={5,4,3,2,1,8,9,0,4,6,0};
        int temp;
        int min;
        int n=11;
        for(int i=0;i<n-1;i++){
            min=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[min]){
                    
                    min=j;
                }
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }

    return 0;
}