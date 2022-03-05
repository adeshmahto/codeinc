#include<iostream>
using namespace std;

inline void letter(int n,char ch[]){
     for(int i=0;(i<10 && ch[i]!='\0');i++){
     string s;
       for(int j=i;(j<n+i && ch[j]!='\0');j++){
           s+=ch[j];
       }
       if(s.length()==n){
           cout<<s<<endl;
       }

       
    }
}
int main(){

    char ch[50];
    cout<<"enter the letter:";
    cin>>ch;
    cout<<"\nfind the 4word letter from above letter->"<<endl;
    letter(4,ch);
     cout<<"\nfind the 6word letter from above letter->"<<endl;
    letter(6,ch);
     cout<<"\nfind the 8word letter from above letter->"<<endl;
    letter(8,ch);



return 0;
}