#include<iostream>
using namespace std;
class time{
    int hour;
    int minute;
    public:
    void settime(int h,int m){
        hour=h;
        minute=m;

    }
    void display(){
        cout<<"hours->"<<hour<<endl;
        cout<<"minute->"<<minute<<endl;
    }
    void sum(time,time);
};
void time:: sum(time t1 ,time t2){
    minute=t1.minute+t2.minute;
    hour=minute/60;
    minute=minute%60;
    hour=hour+t1.hour+t2.hour;
}


int main(){
    time t1,t2,t3;
    t1.settime(2,45);
    t2.settime(3,45);
    t3.sum(t1,t2);
    t3.display();
    

return 0;
}