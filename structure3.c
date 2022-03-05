 #include<stdio.h>
struct student{
    int roll1 ;
    int roll2;
};
int main (){
    struct student x[5];

   x[0].roll1=45;
   x[0].roll2=78;
printf("%d",x[0].roll1);





    return 0;
}