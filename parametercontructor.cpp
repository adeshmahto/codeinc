#include<iostream>
using namespace std;

class Add{
    public:Add(int n,int m){
        cout<<n+m;
    }
};

int main(){

    Add obj(12,34);


    return 0;
}