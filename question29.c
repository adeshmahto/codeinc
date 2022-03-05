#include<stdio.h>
#include<string.h>
#include<math.h>
int main (){
int sum=0;
int p;
int n;
printf("enter the number:");
scanf("%d",&n);
for(int i=0;i<n;i++){      // 0^2+1,1^2+1
p= (pow(i,2)+1);
sum=sum+p;

}
printf("the logic of this series :%d\n",p);
printf("the sum of the series %d",sum);

    return 0;
}