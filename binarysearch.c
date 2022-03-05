#include<stdio.h>
int main (){
    int no[]={10,10,20,30,20,20};
    int size= 6;
    for(int i= 0;i<size;i++){
        for(int j=i+1;i<size;j++){
            if(no[i]==no[j]){
               printf("%d\n",no[i]);
            }
        }
    }
    return 0;
}