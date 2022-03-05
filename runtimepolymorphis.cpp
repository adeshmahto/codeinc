#include<iostream>
using namespace std;

class A{

    public:
    void display(){
        cout<<"i am class A\n";
    }
};
class B{
    public:
    void display(){
        cout<<"i am class B\n";
    }
};


int main(){

A obj;
obj.display();

B obj1;
obj1.display();



return 0;
}