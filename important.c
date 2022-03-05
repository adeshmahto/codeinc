#include<stdio.h>
int main (){
    int k=11;
   for(int i=1;i<=5;i++){

       for(int j=i;j<=5;j++){
           printf("  ");
       }
       //k--;
       for(int j=1;j<=i;j++){
           if(j==1)
           printf("%d    ",k);
           else if(j==2 ){
               printf("%d   ",k+2);
           }
           else if(j==3){
               printf("%d   ",k+4);
           }
          else if(j==4){
               printf("%d   ",k+6);
           }
          else if(j==5){
               printf("%d   ",k+8);
           }
       }
             k--;
       printf("\n");// nextline                                                                                              

   }



    return 0;
}