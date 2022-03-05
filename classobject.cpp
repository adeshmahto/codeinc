#include<iostream>
using namespace std;
class Employer{
    public:
    string name;
    int age;

    // Employer(string n,int a){             // contructors
    //     this->name=n;
    //     this->age=a;
    // }
    void printDetail(){

         cout<<"name of the employee->"<<this->name<<endl;
        cout<<"age of the employee->"<<this->age<<endl;

    }
    private:
    int salary=50000;


};
class programmer:public Employer{
    int rank;
};

int main(){

    // Employer ad("adeshmahto",21);          // constructor
    // // ad.name="Adesh";
    // // ad.age=21;
    // ad.printDetail();
    // // cout<<"name of the employee->"<<ad.name<<endl;
    // // cout<<"age of the employee->"<<ad.age<<endl;
    // cout<<ad.salary;// error will give

    programmer hr;
    hr.name="adesh";
    hr.age=34;
    hr.printDetail();


    return 0;
}