#include <bits/stdc++.h>
using namespace std;

class employee{

    char name[30];
    float age;
    public:
    void getdetail(void);
    void putdetail(void);
};

void employee:: getdetail(void){
    cout<<"enter the name:"<<endl;
    cin>>name;
    cout<<"enter the age:"<<endl;
    cin>>age;
};
void employee:: putdetail(void){
    cout<<"name of employee->"<<name<<endl;
    cout<<"age of employee->"<<age<<endl;
};

const int size=3;


int main(){

    employee earr[size];
    for(int i=0;i<3;i++){
        earr[i].getdetail();
    }
    cout<<"print all the employee->"<<endl;

    for(int i=0;i<size;i++){
        cout<<earr[i].putdetail()<<endl;
    }

return 0;
}