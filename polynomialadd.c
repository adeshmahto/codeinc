#include<stdio.h>
#include<stdlib.h>
struct node{
    float coeff;
    int expo;
    struct node *next;
};
typedef struct node*Node;

Node insert(Node head,float co, int ex){
    Node temp;
    Node new=(Node)malloc(sizeof(struct node));
    new->coeff=co;
    new->expo=ex;
    new->next=NULL;

    if(head==NULL || ex>head->expo){
        new->next=head;
        head=new;
    }
    else{
        temp=head;
        while(temp->next!=NULL && temp->next->expo>=ex);
        temp=temp->next;
        new->next=temp->next;
        temp->next=new;
    }
    return head;
}

Node create(Node head){
    int n,i;
    float coeff;
    int expo;

    printf("Enter the number of term:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf ("Enter the cofficient for term %d: ",i+1);
        scanf("%f",&coeff);
         printf ("Enter the exponent for term %d: ",i+1);
        scanf("%f",&expo);

        head=insert(head,coeff,expo);

    }
    return head;
}
void print(Node head){
    if(head==NULL) printf("No polynomial");
    else{
        Node temp=head;
        while(temp!=NULL){
            printf("(%0.1fx^%d",temp->coeff,temp->expo);
            temp=temp->next;
            if(temp!=NULL) printf(" + ");
            else printf("\n");
        }
    }
}
void polyAdd(Node head1,Node head2){
    Node ptr1= head1;
    Node ptr2=head2;
    Node head3=NULL;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->expo>ptr2->expo){
            head3 = insert(head3, ptr1->coeff,ptr1->expo);
            ptr1  = ptr1->next;

        }
        else if(ptr1->expo<ptr2->expo){
            head3 = insert(head3,ptr2->coeff,ptr2->expo);
            ptr2=ptr2->next;

        }else{
             head3 = insert(head3,ptr2->coeff + ptr1->coeff,ptr1->expo);
               ptr1  = ptr1->next;
                ptr2=ptr2->next;
        }

    }
    while(ptr1!=NULL){
          head3 = insert(head3, ptr1->coeff,ptr1->expo);
            ptr1  = ptr1->next;
    }
      while(ptr2!=NULL){
             head3 = insert(head3,ptr2->coeff,ptr2->expo);
             ptr2=ptr2->next;
    }
    printf("added");
    print(head3);
}
int main(){
    Node head1=NULL;
    Node head2=NULL;
    printf("Enter the first polynomial\n");
    head1=create(head1);
    printf("Enter the secong polynomial\n");
    head2=create(head2);

    polyAdd(head1,head2);
    return 0;
}