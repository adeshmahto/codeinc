#include<stdio.h>
int Gcd(int ,int);
int lcm(int ,int);

int  main (){

printf("%d",Gcd(60,24));
printf("%d",lcm(60,24));
    return 0;
    
}
int Gcd(int n1,int n2){
    int y=0;
    while(n1!=n2){
    if(n1>n2) n1=n1-n2;
    else n2=n2-n1;
    }
     y=n1;
    return n1;

int lcm(int n1,int n2){
    int l=(n1*n2)/y;
    return l;
}    
    
    
}