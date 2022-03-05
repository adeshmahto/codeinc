#include<stdio.h>
int main (){             //deleted
    int n=5;
    int arr[100]={2,3,4,4,5};
    int item;
    printf("Enter the element to be deleted:");
    scanf("%d",&item);
    for(int i= 0; arr[i]!=item;i++){
        if(i>n){
            printf("%d not found",item);
        }
        else{
         while(i<10){

             arr[i]= arr[i+1];
             i++;
         }
            n--;

        for(int i =0; i<n;i++){

            printf("%d\n",arr[i]);
        }
        }
    }




    return 0;
}
