#include<iostream>
using namespace std;

class base{
    public:
   virtual void print(){                               // virtual funtion declare->for deriving 
        cout<<"i am base class"<<endl;
    }
};
class derived :public base{
    public:
    void print(){
        cout<<"i am derived class"<<endl;
    }
};


int main(){

    base *bptr;
    derived d;
    bptr=&d;
    bptr->print();

return 0;
}