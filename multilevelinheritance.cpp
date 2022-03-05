#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"\nClass A\n";
    }
    void add(int a,int b){
        cout<<"add two no."<<a+b<<endl;
    }
    
};
class B: public A{
    public:
    B(){
        cout<<"Class B\n";
    }
    void multiple(int a,int b){
        cout<<"add two no."<<a*b<<endl;
    }
};
class C :public B{
    public:
    C(){
        cout<<"class C\n";
    }
     void divide(int a,int b){
        cout<<"add two no."<<a/b<<endl;
    }
};



int main(){
 
   C obj;
   obj.add(7,8);


    return 0;
}