#include<iostream>
using namespace std;

void Swapping(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=3;
    int y=5;
    cout<<"x="<<x<<"y="<<y<<endl;
    Swapping(x,y);
     cout<<"x="<<x<<"y="<<y<<endl;



return 0;
}