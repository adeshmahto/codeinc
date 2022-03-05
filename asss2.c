#include<stdio.h>

int main (){
    int max=0;
    int arr[33]= {1,2,3,4,5 };
    for (int i =0;i<5;i++){

        if( arr[i]>max){
            max= arr[i];

        }

      
    }
    printf("%d is the maximum number.",max);





    return 0;
}