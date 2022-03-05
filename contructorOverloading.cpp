#include<iostream>
using namespace std;

class integer{
    int m,n;
    int x,y;
    public:
    integer(){
        m=0,n=0;
    }
    integer(int m,int n){
        this->m=m;
        this->n=n;
    }
    integer(integer &i){
        x=i.m;
        y=i.n;
    }
    void display(){
        cout<<x<<endl;
        cout<<y<<endl;
    }

};





int main(){
    integer it(2,4);
    integer it1( it);
    it1.display();
    

return 0;
}