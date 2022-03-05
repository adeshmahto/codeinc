#include <stdio.h>
#include <stdlib.h>
int q[5];
int f=-1,r=-1;
int n=4;

void enqueu(int data){
if((r+1)%n==f){
    printf("queue is full");
    return;
}
if(f==-1)
f=0;
r=(r+1)%n;
q[r]=data;
}
int deque(){
    if(f==-1){
        printf("queue is underflow");
    }
    int result=q[f];
    if(f==r){
        f=-1;
        r=-1;
    }else{
     f=(f+1)%n;
    return result;
    }
   
}
void display(){
    printf("\ndisplay the element:->\n");
    for(int i=f;i<(r+1)%n;i++){
        printf("%d ",q[i]);
    }
}


int main(){

int x,y;
while(1){
    printf("\nEnter the option:[1 for enque]:[2 for deque]:[3 for display]\n");
    scanf("%d",&x);
    switch(x){
        case 1:
        printf("Enter the number to enqueu:");
        scanf("%d",&y);
        enqueu(y);
        break;

        case 2:
        printf("Deque the element:");
        deque();
        break;

        case 3:
      
        display();
        break;

    }

}


    return 0;
}