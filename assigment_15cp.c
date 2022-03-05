#include<stdio.h>
int main (){
    int sum=0;
    int arr[33]= {1,2,3,4,5 };
    for (int i =0;i<5;i++){

      if((arr[i] & 1)==0){
          printf("%d is a even number.\n",arr[i]);
      }
      else{
          printf("%d is a odd number.\n",arr[i]);
      }
    }





    return 0;
}