#include<stdio.h>
int main (){
    int arr [] ={9,5,6,7,2};
    int j;
    int key;
    int length = 5;
    for(int i = 1;i<length ;i++){
       key= arr[i];
       j=i-1;
       while(j>=0 && arr[j]>key){
           arr[j+1]=arr[j];
           j=j-1;

       }
       arr[j+1]=key;

    }
    for(int i=0;i<length ;i++){
        printf("%d",arr[i]);
    }




    return 0;
}

                                                    //{9,5,6,7,2} -> {5,9,6,7,2}->{ 5,6,9,7,2}  ...........> {2,5,6,7,9}