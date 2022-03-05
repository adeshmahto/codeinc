#include<stdio.h>
#include<stdlib.h>
struct node{
    int coef;
    int expo;
    struct node*next;
};
typedef struct node* Node;
Node Head1,Head2,h1,h2,n,e;

void display(Node);
Node polyadd(Node ,Node);

void main(){
    int x,y,p,b;
    for(;;){
        printf("\nEnter the coefficient for 1st equation:");
        scanf("%d",&x);
        printf("\nEnter the Exponatiional for 1st equation:");
        scanf("%d",&y);
        printf("\nEnter the coefficent for 2nd equation:");
        scanf("%d",&p);
        printf("\nEnter the exponational for 2nd quation:");
        scanf("%d",&b);
        if((x==-1 && y==-1) && (p==-1 && b==-1)) break;

        if(Head1==NULL){
            Head1=h1=(Node)malloc(sizeof(struct node));
            Head1->coef=x;
            Head1->expo=y;
            Head1->next=NULL;
        }else{
            e=(Node)malloc(sizeof(struct node));
            e->coef=x;
            e->expo=y;
            e->next=NULL;
            h2->next=e;
            h2=e;
        }
         
           if(Head2==NULL){
            Head2=h2=(Node)malloc(sizeof(struct node));
            Head2->coef=p;
            Head2->expo=b;
            Head2->next=NULL;
        }else{
            n=(Node)malloc(sizeof(struct node));
            n->coef=p;
            n->expo=b;
            n->next=NULL;
            h1->next=n;
            h1=n;
        }



    }
  
    printf("\nequation of 1st\n");
    display(Head1);
    printf("\nequation of 2nd\n");
    display(Head2);
    printf("\nadding both equation\n");
    Node nn=polyadd(Head1,Head2);
    display(nn);

}
void display(Node t){         // printing part

  
    while(t!=NULL){
        printf("%dx^%d",t->coef,t->expo);
        t=t->next;
        if(t) printf(" + ");
        else printf("\n");
    }
}
Node polyadd(Node head1,Node head2){        // recursion
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    Node result;
    if(head1->expo>head2->expo){
        result=head1;
        result->next=polyadd(head1->next,head2);
    }
    else if(head1->expo < head2->expo){
        result=head2;
        result->next=polyadd(head1,head2->next);
    }else{                                                 // if both expo is equal we simply add it.
        Node nn=(Node)malloc(sizeof(struct node));
        nn->coef=head1->coef+head2->coef;
        nn->expo=head1->expo;
        result =nn;
        result->next=polyadd(head1->next,head2->next);
    }
    return result;

}
