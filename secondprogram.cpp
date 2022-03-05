#include<iostream>
using namespace std;


int main(){
   int fre=0;

   int arr[]={1,2,2,3,3,3,4,5,6,7,1,1,1,1,1,1,1,1};

    int size=sizeof(arr)/sizeof(int);

   for(int i=0;i<size-1;i++){
       for(int j=i+1;j<size-i-1;j++){

           if(arr[i]==arr[j]){
                
               fre=arr[i];
           }
       }
   }

   cout<<"most occuracy no.->"<<fre;

return 0;
}