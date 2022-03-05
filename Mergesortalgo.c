#include <stdio.h>
#include <stdlib.h>

void  merge(int arr[],int s,int m,int e){

int i=s;
int j=m+1;
int k=0;

int temp[e-s+1];          // temp arr[]!

while(i<=m && j<=e){
    if(arr[i]<arr[j]){
        temp[k++]=arr[i++];
    }else{
        temp[k++]=arr[j++];
    }
}
while(i<=m)
    temp[k++]=arr[i++];

while(j<=e)
    temp[k++]=arr[j++];

for(int i=s;i<=e;i++){
    arr[i]=temp[i-s];
}
}

void mergesort(int arr[],int s,int e){
int m;
if (s<e){
     m=(s+e)/2;
    mergesort(arr,s,m);
    mergesort(arr,m+1,e);
    merge(arr,s,m,e);
}

}

int main(){


 int n,arr[20],temp;
 int s=0;
    printf("Enter the len of array:");
    scanf("%d",&n);
    int e=n-1;
    printf("Enter the number in array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr,s,e);
    printf("**********sorted array************\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }



    return 0;
}


