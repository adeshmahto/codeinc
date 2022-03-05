#include<iostream>
using namespace std;

class xyz{
    private:
    char ch='A';
    int num =11;

    public :
    friend class ABC;                   // friend classs -> it can allow to use of its variable  to the class ABC

};

class ABC{
    public:
    void display(xyz obj){
        cout<<obj.ch<<endl;
        cout<<obj.num<<endl;
    }
};


int main(){

    ABC obj1;
    xyz obj2;

    obj1.display(obj2);
    


return 0;
}