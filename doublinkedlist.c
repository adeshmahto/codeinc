#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct*node right;
    struct*node left;

}
typedef struct node *Node;
Node Head,h,End;
void insert_beg(int i);
void display(void);

void main(){

    int i;
    while(;;){
        printf("enter the data[for stop -999]")
        scanf("%d",&i);
        if(i==-999){
            break;
        } 

        if(Head==Null){
            Head=h=(Node)malloc(sizeof(struct node));
            Head->data=i;
            Head->right=Null;
            Head->left=Null;

        }else{
            n=(Node)malloc(sizeof(struct node));
            n->data=i;
            n->right=Null;
            n->left=h;
            h->right=n;
            h=n;
        }
    }
    End=h;
    display();

	printf("\n\n Enter the data to insert at the begining :: ");
	scanf("%d",&i);
	insert_beg(i);  
	printf("\n\n Data of the DLL after insertion at the begining :: ");
	display();
}
void display(){
    printf("\n data of linked list[right to left]\n");

    h=Head;
    while(h!=null){
        print("%d",h->data);
        h=h->right;  
    }
    h=End;
    printf("\n data of linked list[left to right]");
    while(h!=null){
        print("%d",h->data);
        h=h->left;  
    }

}
void insert_beg(int i)
{
	nptr temp;
	temp = (nptr)malloc(sizeof(struct node));
	temp->data = i;
	temp->right = Head;
	Head->left = temp;
	temp->left = NULL;
	Head = temp;
}