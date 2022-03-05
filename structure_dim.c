#include<stdio.h>
#include<string.h>
 struct vector{
    int x;
    int y;
};
struct vector sumvector( struct vector v1 ,struct vector v2){
    struct vector c;
    c.x=v1.x +v2.x;
    c.y=v1.y+v2.y;
   
}
int main(){
    struct vector v1,v2,sum;
    v1.x=5;
    v1.y=6;
    v2.x=5;
    v2.y=6;
   sum= sumvector(v1,v2);
   printf("%d and %d",sum.x,sum.y);
    return 0;
}