
#include<stdio.h>
#include<string.h>
#include<math.h>
// int main (){  //amstrong no.
//     int r,num,n,x ,s=0;
//     printf("Enter the no.");
//     scanf("%d",&num);
//     x=num;
//     for(x=num;x!=0;x=x/10){
//         n++;                 //carry on the number ;
//     }
//     for(x=num;x!=0;x=x/10){
//         r=x%10;
//         s=s+pow(r,n);
//     }
//     if(s==num){
//         printf("its a amstrong number");
//     }
//     else{
//         printf("not a amstrong number");
//     }


//     return 0;
// }


// int main(){         //perfect no.
// int num ,i,sum=0;
// printf("Enter the no.");
// scanf("%d",&num);
// for(i=1;i<=num;i++){
//     if (num%i==0){
//         sum=sum+i;
//     }

   

// }
// if(num==sum){
//     printf("perfect no.");
// }
// else{
//     printf("not perfect");
// }




// return 0;
// }

int main(){
    int a,b,prod;
    printf("enter two number");
    scanf("%d,%d",&a,&b);
    prod=a*b;
    while(a!=b){
        if(a>b)
        a=a-b;
        else
        b=b-a;
    
}
    int hcf=b;
    int lcm=prod/hcf;

    printf("hcf of two no. %d",hcf);
    printf("lcm of two no. %d",lcm);
    return 0;
    

}