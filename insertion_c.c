#include<stdio.h>
int main (){
    int arr[]={8,5,6,7,9};
    int n=5;
    int key;
    int j;
    for(int i=1;i<n;i++){
        key =arr[i];
        j=i-1;
        while( j>=0 && arr[j]>key){
            arr[j+1] =arr[j];
            j=j-1;
        }
        arr[j+1]=key;



    }
    for(int i=0;i<n;i++){

        printf("%d\n",arr[i]);
    }







    return 0;
}
    

