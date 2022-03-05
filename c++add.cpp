#include<iostream>
using namespace std;

class A{
    
    int data;
    public:
    void setvalue(int data){
        this->data=data;
    }


};
class B{
    int data;
    public:
    void setvalue(int data){
        this->data=data;
    }

    friend void sum( A,B);
};

void sum(A a,B b){
    cout<<"add the two number->"<<a.data+b.data;
}
int main(){

    A a;
    B b;
    a.setvalue(23);
    b.setvalue(45);
    sum(a,b);





    return 0;
}