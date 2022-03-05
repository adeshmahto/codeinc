#include<iostream>
using namespace std;

class parent{
    public:

    string name="parent\n";
    int age=45;
    parent(){
        cout<<"hey i am parent class"<<endl;
    }

    //Member function
    int add(int a,int b){
        return a+b;
    }
    
   
};
class child:public  parent{
    public:
    child(){
        cout<<"hey i am child class"<<endl;
    }

};


int main(){

    child obj;
    cout<<obj.name;
    cout<<obj.add(23,45);
    


    return 0;
}