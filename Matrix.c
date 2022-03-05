#include<stdio.h>
int main(){
   int i=6;
   int *j=&i;
   int **k=&j;
   printf("%d",*j);
   printf("%u",&i);
   printf("%d",*k);
   printf("%d",**k);





    return 0;
}