#include<stdio.h>
#include<math.h>
int main(){
 int num,r,i,n=0,s=0;
 num=1634;
 for(int i=num;i>=0;i=i/10){
     n++;
 }
 for(int i=num;i>=0;i=i/10){
     r=i%10;
     s=s+ pow(r,n);

 }
 printf("%d",s);
return 0;
}                                                                                                                                                                                                                                                 #include<stdio.h>
