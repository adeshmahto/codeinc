#include<stdio.h>
#include<stdlib.h>

void push( int);
int pop();

int main(){

push(1);
push(2);
printf("%d",pop());
return 0;


}
void push(int item){
int stack[];
int top=-1;

if(top==20-1) printf("overflow");
else{
    top=top+1;
    stack[top]=item;
}
return;

}
int pop(){
    int temp;
    if(top==-1) {
        printf("underflow");
        return -1;
    }else{
        temp=stack[top];
        top=-top;
        return temp;
    }
 
}




