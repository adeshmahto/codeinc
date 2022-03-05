#include<stdio.h>

int change(int a,int *mul){
*mul= a*10;
}
int main (){
    int mul;
    change(5, &mul);
    printf("the 10 times of variable is %d\n",mul);

    return 0;
}