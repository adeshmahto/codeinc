#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter the age:";
cin>>age;
switch(age){

    case 18:
        cout<<"you are just adulthood";
        break;
    case 36:
        cout<<"you are above 18 and can do anything "  ;
        break;
    case 48:      
        cout<<"you are to old for this";
        break;
    default:
        cout<<"you cant do anything";
       


}




    return 0;
}