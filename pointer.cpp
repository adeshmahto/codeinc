#include<iostream>
using namespace std;
int main(){

    int a=34;
    int *ptr=&a;
    cout<<"address of a->"<<ptr<<endl;
    cout<<"address of a->"<<&a<<endl;
    cout<<"value of a->"<<*ptr;



    return 0;
}