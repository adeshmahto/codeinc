#include<iostream>
using namespace std;


int main(){
    // using of new operator
    int *p=new int(25);
 

    // using of delete operator 
    delete p;

    // deleting the array
    int arr[]={1,2,3,4,5};
    cout<<arr[0];
    delete  []arr;
    cout<<arr[0];
    


   


return 0;
}