#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
typedef struct node*Node;
Node Head,h,h1,h2,n,e,o,End,Head1,Head2,t;

void display(Node);
void fun(Node);

void main(){


for(;;){
 int x,y;
    printf("Enter the number[-100 to stop]:");
    scanf("%d",&x);
    if(x==-100) break;

    if(Head==NULL){
        Head=h=(Node)malloc(sizeof(struct node));
        Head->data=x;
        Head->right=NULL;
        Head->left=NULL;

    }
    else if (Head!=NULL){
        n=(Node)malloc(sizeof(struct node));
        n->data=x;
        n->left=h;
        n->right=NULL;
        h->right=n;
        h=n;
    }
    if(Head1==NULL && x%2==0){
        Head1=h1=(Node)malloc(sizeof(struct node));
        Head1->data=x;
        Head1->right=NULL;
        Head1->left=NULL;
    }
    else if(Head1!=NULL && x%2==0){
        e=(Node)malloc(sizeof(struct node));
        e->data=x;
        e->left=h1;
        e->right=NULL;
        h1->right=e;
        h1=e;
    }
     if(Head2==NULL && x%2!=0){
        Head2=h2=(Node)malloc(sizeof(struct node));
        Head2->data=x; 
        Head2->right=NULL;
        Head2->left=NULL;
    }
    else if(Head2!=NULL && x%2!=0){
        o=(Node)malloc(sizeof(struct node));
        o->data=x;
        o->left=h2;
        o->right=NULL;
        h2->right=o;
        h2=o;
    }
}
//  }printf("\nprint the full linkedlist:\n");
//  display(Head);
//   printf("\nprint the even linkedlist:\n"); 
//    display(Head1);
//     printf("\nprint the odd linkedlist:\n");
//      display(Head2);
          fun(Head);

}
void display(Node t){

  while(t!=NULL){
      printf("%d ",t->data);
      t=t->right;

  }
}
void fun(Node h){
    if(h==NULL)
    return;
    printf("%d",h->data);
    if(h->right!=NULL)
    fun(h->right->right);
    printf("%d",h->data);
}