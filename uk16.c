#include<stdio.h>
int main (){
    int bin=0,place=1;
    int n=0;
    int i=14;
    int *ptr=&i;

while(*ptr!=0){
    n=*ptr%2;
    i=*ptr/2;
    bin= bin+(n*place);
    place=place*10;

}
printf("%d",bin);




    return 0;
}
