#include<iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;


int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    string s1=s;
    char c;
    for(int i=0,j=s.length()-1;i<j;i++,j--){
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
    if(s1.compare(s)==0){
        cout<<"palindrome\n";
    }else{
        cout<<"not palindrome";
    }

return 0;
}