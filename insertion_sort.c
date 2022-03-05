#include<stdio.h>
int main (){
    int key =0;
    int j=0;
    int arr [100]= {7,3,5,4,2,6};
    int n=6;
    for(int i =1;i<n;i++){

        key =arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){

            arr[j+1] = arr[j];
            j = j-1;
             
        }
                    // arr0 = 3
        arr[j+1]=key; 
        
          
    }
     
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);
      
   }




    return 0;
}