#include<iostream>
using namespace std;
class B;
class A{

    int value1;
    public:
    void setvalue(int value1){
        this->value1=value1;
    }
    friend void add(A,B);
};
class B{

   
    int value2;
    public:
    void setvalue(int value2){
        this->value2 =value2;  
    }
    friend void add(A,B);
};
void add(A obj1 ,B obj2){
    cout<<obj1.value1+obj2.value2;
}

int main(){
    A a;
    B b;
    a.setvalue(23);
    b.setvalue(45);
    add(a,b);

return 0;
}