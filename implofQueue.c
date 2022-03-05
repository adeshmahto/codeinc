#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1;
int Q[5];
int max=5;

void enque(int);
int deque();

void display();

void main(){

int v,it,op;
printf("\n\nEnter 1 to choose enque|| Enter 2 to choose deque||Enter 3 to exit\n\n");
while(100){
    printf("Enter the option:");
    scanf("%d",&op);

    switch(op){
        case 1:
        printf("Enter the number to enque:");
        scanf("%d",&it);
        enque(it);
        break;

        case 2:
        deque();
        break;

        case 3:
        display();
        break;

    }

}

}
void enque(int x){
    if(r==max-1){
        printf("Overflow");
    }else{
        r=r+1;                     // enter the field
        Q[r]=x;

        if(f==-1) f=0;                  // enter f into the field;
           
    }
   
}
int deque(){
    int v=-999;
    if(f<0){
        printf("Underflow");
        
    }else{
        v=Q[f];
        if(r==f){ // pull these two from the field  so we can start new game;
            r=-1;
            f=-1;
        }else{
            f=f+1;
        } 
    }
    return v;
}
void display(){
    if(f==-1){
        printf("empty");
    }else{
    for( int i=f;i<=r;i++){
    printf("%d\t",Q[i]);
    }
    }

}
