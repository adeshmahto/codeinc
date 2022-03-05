#include <bits/stdc++.h>
using namespace std;

class sample{
    int a,b;
    public:
    void setvalue(int a,int b){
       this-> a=a;
        this->b=b;
    }
   friend float mean(sample );                    // friend allow this function to action outside the class 
};

// float sample:: mean(sample s){          // if you dont want to use friend function
//     return float (s.a+s.b)/2;
// }
float mean(sample s){
    return float (s.a+s.b)/2;
}
int main(){
sample s;
s.setvalue(3,4);
 //cout<<s.mean(s);         if you not using friend funtion
 cout<<mean(s);

    return 0;
}