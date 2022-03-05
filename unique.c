#include<stdio.h>
int main(){

int n;
printf("enter the total number of data:\n");
scanf("%d",&n);
int arr[n];
printf("input %d elment in the array:\n",n);
for(int i=0;i<n;i++){
    printf("element -%d:",i);
    scanf("%d",&arr[i]);
}
for(int i =0;i<n;i++){
    int flag=0;
    for(int j=0;j<n;j++){
        if(arr[i]==arr[j]&& i!=j){
            flag =1;
            break;

        }

    }
    if(flag== 0){
        printf("%d\n",arr[i]);
    }
}



    return 0;
}