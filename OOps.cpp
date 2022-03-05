#include<iostream>
using namespace std;

class car{
   public:
    string color;
    int speed;
    void getdata(int distance,int fuel){

        cout<<"The car has covered"<<distance<<"and has consumed"<< fuel <<" L fuel"<<endl;

    }
    void mileage(float distance,float fuel);

}x;
 void car:: mileage(float d,float f){
         float carmileage= d/f;
         cout<<"the car mileage is "<< carmileage<<endl;
 }

int main(){

car a;
a.color="Red";
a.speed=360;
cout<<a.color<<endl;
cout<<a.speed<<endl;




return 0;
}