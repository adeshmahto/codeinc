#include<iostream>
using namespace std;

static int m=10;
int main(){
int m=20;
{
    int k=m;
    int m=30;
    cout<<"we are inner block\n";
    cout<<"k="<<k<<endl;
    cout<<"m="<<m<<endl;
    cout<<"::m="<<::m<<endl;
}
     cout<<"outer block-\n";
    cout<<"m="<<m<<endl;
    cout<<"::m="<<::m;

return 0;
}