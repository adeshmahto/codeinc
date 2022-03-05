#include<stdio.h>
void printArray(int * ptr,int n ){
    printf("%d",ptr);
for(int i=0;i<n;i++){

    printf("%d\n", *(ptr+i));
}

}



int main (){

int arr[100]= {1,2,3,4,4,5,6};
printArray( &arr[0],7);





    return 0;
}