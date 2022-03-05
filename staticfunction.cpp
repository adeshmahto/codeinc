#include<iostream>
using namespace std;
class test{
    static int count;
    int code;
    public:
    void setcode(){
        code=++count;
    }
    void show(){
        cout<<"number of object"<<code<<endl;
    }
    static void showcode(void){
        cout<<"the count->"<<count;
    }
};
int test :: count;


int main(){
    test t1,t2,t3;
    t1.setcode();
    t3.setcode();
    test::showcode();
    test t4;
    t4.setcode();
    test:: showcode();



    return 0;
}