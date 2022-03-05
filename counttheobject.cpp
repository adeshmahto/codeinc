#include<iostream>
using namespace std;

class item{
   static  int count;
    int number;
    public:
    void counting(int a){
        number=a;
        count++;
    }
     void display(){
        cout<<"the occurence of the object->"<<count;
    }
};
int item:: count;




int main(){
    item a,b,c;
    a.counting(34);
    b.counting(56);
    c.display();

return 0;
}