#include<stdio.h>
#include<stdlib.h>
#define ms 4

int s[5],t=-1;

void push(int );
int pop();
void display();

int main(){
    int it,v,op;
    printf("/n/n Enter 1 to push || Enter 2 to Pop || Enter 3 to exit");
    while(1){
        printf("\n Enter your option: ");
        scanf("%d",&op);
        switch(op){
            case 1:
            printf("Enter a number to push: ");
            scanf("%d",&it);
            push(it);
            break;

            case 2:
            v=pop();
            if(v>0)
            printf("%d is popped from the stack ",v);
            break;

            case 3:
            exit(0);
           // printf("wrong chosen");
           
        }
    }


 return 0;
}

void display(){
    for(int i=t;i>=0;i--){
        printf("%d ",s[i]);
    }
}
void push(int x){
    if(t==ms)
    printf("overflow");
    else{
        t=t+1;
        s[t]=x;

    }
    display();
}
int pop(){
 
 int temp;

 if(t==-1){
     printf("underflow");
     return -1;
 }else{
     temp=s[t];
     t=-t;
     display();
     return temp;
 }

}