#include<iostream>
using namespace std;
class helloworld{
    public:
    //contructor
    helloworld(){
        cout<<"contructor is called"<<endl;
    }
    //destructor
    ~helloworld(){
        cout<<"destructor is called"<<endl;
    }
    // Member function
    void display(){
        cout<<"hello world from member function"<<endl;
    }
};


int main(){

    helloworld obj;
    obj.display();



    return 0;
}