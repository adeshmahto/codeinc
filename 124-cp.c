#include<stdio.h>
#include<string.h>

int power (int ,int );
int main(){
     int x,y;
     printf("entr:");
     scanf("%d %d",&x,&y);
     printf("power(%d,%d) is %d ",x,y, power(x,y));


     return 0 ;
}
int power(int x,int y){
    if(y==0) return 1;

    else if (y==1) return x;

    else return x*power(x,y-1);
    
    }
