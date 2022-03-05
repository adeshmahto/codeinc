#include<stdio.h>
#include<Math.h>

int  fun(int,int);
int main (){

printf("%d",fun(1100,2));

return 0;
}

int  fun(int x,int y){
    int bin=0,place=1;
    int j=0;
    int rec=0;
    int dec=0;
    int *ptr=&x;
   switch(y){
    case 1:
    while(*ptr!=0){
    rec=*ptr%2;
    *ptr=*ptr/2;
    bin= bin+(rec*place);
    place=place*10;
    }
    return bin; 
    break;
    case 2:
    
    while(*ptr!=0){
    rec=*ptr%10;
    dec=(pow(2,j)*rec);
    bin+=dec;
    *ptr=*ptr/10;
    j++;
}
return bin;
break;



}
}