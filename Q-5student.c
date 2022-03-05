#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node* Node;

Node Head1,Head2,h1,h2,e,n;

Node sorted(Node , Node);
void display(Node);

void main(){
    int x;
    printf("\nRoll number [1,2,3,4,5,6,7,8,9,10] --> names[anish,sonu,ritam,sayan,satyam,sushmita,adnan, rounak,somesh,ayush]\n");
    for(;;){
        printf("\nenter the roll no. [-11 to stop counting]:");
        scanf("%d",&x);
    if(x==-11) break;

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
        n=(Node)malloc(sizeof(struct node));
        n->data=x;
        n->next=NULL;
        h2->next=n;
        h2=n;
    }
    }
    Node newnode=sorted(Head1,Head2);
    display(newnode);

   
   
}

void display(Node t){

while(t!=NULL){
    printf("%d ",t->data);
    t=t->next;
}

}
Node sorted(Node head1,Node head2){

if(head1==NULL){
    return head2;
}
if(head2==NULL){
    return head1;
}
Node result;

if(head1->data<head2->data){
    result=head1;
    result->next=sorted(head1->next,head2);
}else{
    result=head2;
    result->next=sorted(head1,head2->next);
}

return result;


}
