#include<stdio.h>
int main (){
    int side1;
    int side2;
    int side3;
    printf("Enter the side1 of a triangle:");
    scanf("%d",&side1);
    printf("Enter the side2 of a triangle:");
    scanf("%d",&side2);
    printf("Enter the side3 of a triangle:");
    scanf("%d",&side3);

    if(side1==side2 && side2==side3 && side3==side1){
        printf("It is a equilateral triangle");
    } else if( side1==side2 || side1==side3 || side2==side3 ){
        printf("it is a isoceles triangle");
    }else{
        printf("it is a scalene");
    }

    






}