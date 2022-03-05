#include<stdio.h>

int main(){ 

for(int i=2;i<=20;i++){            // 1,3,5,7,9,11,13,15,17,19
if(i%2==0){
continue;
}
int flag=1;
for(int j=2;j<i-1;j++){   //suppose i=9 comes
    if(i%j==0){    //9%3=0   so flag will 0;
        flag=0;
        
    }

}

if(flag==0){// this will execute , this in outer loop

  break;               // till 9 its come becuz of this break;
 
    
}
printf("\n%d odd prime number ",i);

}


return 0;
}
r=n%10;
c=r*r*r;
sum=sum+c;
n=n/10;