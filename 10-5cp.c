#include<stdio.h>
#include<stdlib.h>

int main (){
int *ptr;

ptr=(int*)malloc(600000*sizeof(int));
for(int i =0;i<8; i++){

     printf("enter the vale %d element :\n",i);
     scanf("%d",&ptr[i]);

}
for(int i=0;i<8;i++){
     printf("the value of %d element is %d\n",i,ptr[i]);
}




return 0;

}