#include<stdio.h>
int main (){

 for(int i=1;i<=3;i++){ // its for column 

for(int j= i;j<5;j++){
    printf(" ");
}
     
     for(int j=1;j<=5;j++){  // this also for rows 
         
          if(j==1||j==5||i==1||i==3){
              printf("*");
          }else
 
          printf(" ");

     
     }

  
 



     printf("\n");
 }


    return 0;
}