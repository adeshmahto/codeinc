#include<iostream>
using namespace std;
class B;
class A{
    int value1;
    public:
    void setvalue(int data1){
        this->value1=data1;
    }
    void display(){
        cout<<value1<<endl;
    }
    friend void exchange( A & ,B &);
};

class B{

    int value2;
    public:
    void setvalue(int data2){
        this->value2=data2;
    }
    void display(){
        cout<<value2<<endl;
    }
    friend void exchange( A &,B &);

};
void exchange(A &a,B &b){   // we have to pass the addresses of the object because the funtion is outside of this class
  
   int temp=a.value1;
   a.value1=b.value2;
   b.value2=temp;
}



int main(){
    A a;
    B b;
    a.setvalue(45);
    b.setvalue(67);
    // a.display();
    // b.display();
    exchange(a,b);
    // a.display();
    // b.display();

return 0;
}