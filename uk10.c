#include<stdio.h>
int main (){

    for(int i=1;i<=5;i++){
       
       for(int z=5;z>=i;z--){
           printf(" ");
       }
          for(int j=1;j<i;j++){
              printf("%d",j);
           
         }


        for(int k=i;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }








    return 0;
}