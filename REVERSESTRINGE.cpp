#include<iostream>
using namespace std;


int main(){
    string s,s_rev;
    cout<<"Enter the String:"<<endl;
    cin>> s;
    for(int i=s.size()-1;i>=0;i--){
        s_rev.push_back(s[i]);

    }
    if(s_rev==s){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not palindrome";
    }



return 0;
}