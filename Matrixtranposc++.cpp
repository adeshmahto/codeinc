#include<iostream>
using namespace std;
class matrix{
    int m[3][3];
    public:
    void read(void){
        cout<<"enter the matrix 3x3:"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>m[i][j];
            }
        }
    }
    void display(void){
        cout<<"display the matrix 3x3:"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    friend matrix tranps(matrix);
};

matrix tranps(matrix m1){
    matrix m2;                              // we creating the temp object which store the transpose of m array
      for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               m2.m[i][j]=m1.m[j][i];               // object m2 has own matrix which transpose using object m1;
            }
        }
        return m2;                     // return tranpose matrix object
}


int main(){
    matrix mat1,mat2;
    mat1.read();
    cout<<"you enter the following matrix:"<<endl;
    mat1.display();
    mat2=tranps(mat1);                      // we put obj1 as argument  and get the out put of another obj
    cout<<"tranpose matrix"<<endl;
    mat2.display();               // display the obj2 or transpose matrix


return 0;
}