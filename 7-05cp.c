#include<stdio.h>
int main(){
    int i,n,k,flag=0;
    int arr [30] ;
    printf("how many elements:");
    scanf("%d", &n);
    printf("enter the elements:");
    scanf("%d",&arr[i]);
    printf("which elements to be selected:");
    scanf("%d",&k);
    for(i=0; i<n; i++){
        if(arr[i]==k){
            flag=1;
            break;

        }
        if (flag==0){
            printf("%d not found",k);
        }
        else
        printf("%d found  at index %d",k,i);
    }

    return 0;
}


//linear search.