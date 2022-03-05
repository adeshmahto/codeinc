#include<iostream>
using namespace std;


int main(){
    string s,finals;
    cout<<"Enter the letter:"<<endl;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        finals=s[i]+1;
         cout<<finals;
    }
   

return 0;
}