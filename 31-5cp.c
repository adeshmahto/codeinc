#include<stdio.h>

int main (){                                // insertion;
    int n=5,pos,num;
    int arr[6] = {11,2 ,5,6,7};
    printf("enter the new element:");
    scanf("%d",&num);
    printf("enter the element position:");
    scanf("%d",&pos);
    if(pos>= n || pos<0){
        printf("invalid postion");
    }
    else{
        for(int i =n-1;i>=pos;i--){
            arr[i+1]= arr[i];              //it is storing the value.
        }

        arr[pos]=num;
       // n++;
        printf("element after insertion\n");
        for(int i =0; i<n;i++){
            printf("%d\n",arr[i]);
        }
    }



    return 0;
}