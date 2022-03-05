#include<iostream>
#include<string.h>
using namespace std;


int main(){
  string na;
  char n[10];
  int i,j,l;
  cout<<"enter the main string:"<<endl;
  getline(cin,na);
  cout<<"enter the sub string"<<endl;
  cin>>n;
  l=strlen(n);
  for(i=0;na[i]!='\0';i++){
      for(j=0;n[j]!='\0';j++){
          if(na[i+j]!=n[j]){
              break;
          }
      }
      if(j==l)
        cout<<i+1<<"yes it is present index number"<<endl;

  }
  cout<<"sub string not found";

   

return 0;
}