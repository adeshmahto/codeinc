#include<stdio.h>
int main (){
   
   int mark[4];
    int *ptr = &mark[0];
    for(int i=0;i<4;i++){

  printf("enter the element of %d ",i+1);
  scanf("%d", ptr);
  ptr++;
    }
     for(int i=0;i<4;i++){
         printf("%d",mark[i]);
     }


  




    return 0;
}


