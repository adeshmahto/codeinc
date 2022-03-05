#include<iostream>
using namespace std;

class time1{
    int hours;
    int minutes;
    public:
    void gettime(int h,int n){
        hours=h;
        minutes=n;

    }void puttime(void){
        cout<<"hours->"<<hours;
        cout<<"minutes->"<< minutes;

    }void sum(time1,time1);

};

void time1::sum(time1 t1,time1 t2){                      // we creating a two object means one class can be use multiple time as per object
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes= minutes % 60;    // total minutes;
    hours=t1.hours+t2.hours;

}
int main(){
    time1 T1,T2,T3;
    T1.gettime(2,45);
    T2.gettime(3,30);
    T3.sum(T1,T2);

    cout<<"T1="<<T1.puttime();
    cout<<"T2="<<T2.puttime();
    cout<<"T3="<<T3.puttime();
    return 0;
}
