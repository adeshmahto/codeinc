#include<stdio.h>

int main (){
    int arr[3][3];
    int *ptr=&arr[0][0];
    int sum=0;
    
    

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the elements:");
            scanf("%d",ptr);
            ptr++;


        }
    }
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
       
            
          if(i>j){
              sum+=arr[i][j];
          }

        }
      
    }

     printf("%d",sum);

    return 0;
}