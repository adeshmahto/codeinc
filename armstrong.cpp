#include<iostream>

int main(){

int n,n1,sum,r,i;
std::cout<<"Enter the number";
std::cin>>n;
n1=n;


while(n1>0){
    r=n1/10;
    sum+=r*r*r;
    n1=n1/10;
}

if(n==sum){
    std::cout<<"armstrongno";
}else{
    std::cout<<"not";
}




}