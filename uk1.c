#include<stdio.h>
int main(){
    char e;
   printf("Enter the element:");
   scanf("%c",&e);


 if(e>='a' && e<='z' || e>='A' && e<='z'){
     printf("%c it is alphabet",e);
 }
 else if(e>='0' && e<='9'){
     printf("%c it is digit",e);
 }else{
     printf("%c It is a special character",e);
 }                                                                                                                                                                                                                               




    return 0;
}