#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
 
};
typedef struct node*Node;
Node Head,h,h1,h2,n,e,o,End,Head1,Head2,t;

void display(Node);
Node merge(Node,Node);
Node mergeRec(Node, Node);

void main(){


for(;;){
 int x,y;
    printf("Enter the number[-100 to stop]:");
    scanf("%d",&x);
    if(x==-100) break;

    if(Head1==NULL && x%2==0){
        Head1=h1=(Node)malloc(sizeof(struct node));
        Head1->data=x;
        Head1->next=NULL;
       
    }
    else if(Head1!=NULL && x%2==0){
        e=(Node)malloc(sizeof(struct node));
        e->data=x;
       e->next=NULL;
      
        h1->next=e;
        h1=e;
    }
     if(Head2==NULL && x%2!=0){
        Head2=h2=(Node)malloc(sizeof(struct node));
        Head2->data=x; 
        Head2->next=NULL;
       
    }
    else if(Head2!=NULL && x%2!=0){
        o=(Node)malloc(sizeof(struct node));
        o->data=x;
       
        o->next=NULL;
        h2->next=o;
        h2=o;
    }
  
 }
  printf("\nprint the even linkedlist:\n"); 
   display(Head1);
    printf("\nprint the odd linkedlist:\n");
     display(Head2);

      //Node newhead=merge(Head1,Head2);
      //display(newhead);
      printf("\nprint the sorted list \n");
     Node newhead2=mergeRec(Head1,Head2);
     display(newhead2);

}
void display(Node t){

  while(t!=NULL){
      printf("%d ",t->data);
      t=t->next;

  }
}
Node merge(Node head1,Node head2){
    Node p1=head1;
    Node p2=head2;
    Node node=(Node)malloc(sizeof(struct node));
    
   
    Node p3=node;
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
     while (p1!=NULL){
         p3->next=p1;
         p1=p1->next;
         p3=p3->next;
     }
      while (p2!=NULL){
         p3->next=p2;
         p2=p2->next;
         p3=p3->next;
     }
   
    return node;
    
}
Node mergeRec(Node head1 ,Node head2){      // recursive approace
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;

    }
    Node result;
    if(head1->data<head2->data){
        result=head1;
        result->next=mergeRec(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergeRec(head1,head2->next);
    }
    return result;
}