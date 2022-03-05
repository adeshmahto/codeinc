#include<iostream>
using namespace std;
class arrobj{
    int age;
    char name[50];
    public:
    void setdetail();
     void showdetail();
};
void arrobj :: setdetail(){
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"enter the age:"<<endl;
    cin>>age;
}
void arrobj :: showdetail(){
    cout<<"show the name->"<<name<<endl;
    cout<<"show the age->"<<age<<endl;
}


int main(){
    arrobj arr[3];
    for(int i=0;i<3;i++){
        arr[i].setdetail();
    }
    cout<<"show the detail->"<<endl;
     for(int i=0;i<3;i++){
        arr[i].showdetail();}




return 0;
}