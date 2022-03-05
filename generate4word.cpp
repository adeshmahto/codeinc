#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){

    string name="India";
      srand(time(0));
    for(int i=0;i<10;i++){
      
        string st;
        for(int j=0;j<4;j++){
            int arr[10];
            int r=rand()%5;
            cout<<r<<" ";
           

           st+=name[r];
        }
        cout<<st<<endl;
    }
}