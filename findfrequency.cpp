#include<iostream>
using namespace std;


int main(){

    int arr[10],count,flag,test[10],val,c=0;
    int size=sizeof(arr)/sizeof(int);
    cout<<"\nmenter the array element->\n";
    for(int i=0;i<size;i++){
       cin>>arr[i];
    }

  for(int i=0;i<size;i++){
      val=arr[i];
      count=0;
      flag=1;

      for(int j=0;j<size;j++){
          if(val==arr[j])
          count++;
      }
      for(int i=0;i<c;i++){             // this for same no. come over and over 

          if(test[i]==val)
          flag=0;

      }
      if(flag==1){
          cout<<"This value "<< val<<" is repeted by "<<count<<"times\n";
          test[c]=val;   // storing the value in the test array and if test value equal to next value then the flag should be zero so 
          c++;
      }
  }


  
return 0;
}