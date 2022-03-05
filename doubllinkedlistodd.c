#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data; 
	struct node* left; 
	struct node* right;
};
typedef struct node* Node;

Node Head, h, n, End;

void insert_beg(int ); 
void insert_end(int );
void display(void);
void delete_beg(void);
void delete_end(void);
void insert_Pos(int,int);
void delete_pos(int);
void display_even(void);


void main()
{
	int i,j;
	for(;;)
	{
		printf("\n\n Enter the data [-999 to stop] :: ");
		scanf("%d",&i);
		if(i==-999)
		{
			break;
		}
		//create the header node
		if (Head==NULL)
		{
			Head = h = (Node)malloc(sizeof(struct node));
			Head->data = i;
			Head->left = NULL;
			Head->right= NULL;
		}
		else //create other nodes
		{
            if(i%2==0){
			n = (Node)malloc(sizeof(struct node));
			n->data = i;
			n->right = NULL;
			n->left = h;
			h->right = n;
			h = n;
            }
		}
	}
    End = h;
    printf("\ndisplay the  before data\n");
    display();

	 	// it is the last node;
    int y,z,k,n;
    printf("\n enter 1 for insert at beg , enter 2 for insert at end, enter 3 for delete from beg, enter 4 for delete last node\n");
        scanf("%d",&y);
    
    switch(y){
      
        case 1:
            printf("enter data at the begning:\n");
            scanf("%d",&z);
            insert_beg(z);
            display();
            break;

        case 2:
            printf("enter data at the ending:\n");
            scanf("%d",&z);
            insert_end(z);
            display();
            break;

        case 3:
            printf("delete the data from the first\n");
            delete_beg();
            display();
            break;
        case 4:
            printf(" delete from end\n");
            delete_end(); 
            display();
            break;

        case 5:
            
             printf("insert in the given position:");
             scanf("%d",&k);
             printf("insert the desirable number:");
             scanf("%d", &z);
             insert_Pos( k,z);
             display();
             break;
        case 6:
             printf("delete the number in given position:");
             scanf("%d",&n);
             delete_pos(n);
             display();
             break;
     
            
           

       	default:
				printf("\nWRONG CHOICE.");
				break;       

    }

}


void display()
{
	printf("\n  display the data of linkedlist :: \n ");
    h=Head;
    while(h!=NULL){
       
        printf("%d ",h->data);
        h=h->right;
    }
	
}

void insert_beg(int i)
{
	Node temp;
	temp = (Node)malloc(sizeof(struct node));
	temp->data = i;
	temp->right = Head;
	Head->left = temp;
	temp->left = NULL;
	Head = temp;
}
void insert_end(int i){
    Node temp;
	temp = (Node)malloc(sizeof(struct node));
    temp->data = i;
    End->right=temp;
    temp->left=End;
    temp->right=NULL;
    End=temp;
    

}
void delete_beg(){
    if(Head==NULL){
        printf("empty node");
    }
    else if(Head->right==NULL){
        Head=NULL;
    }else{
        Node t=Head;
        Head=Head->right;
        printf("[%d]first node is deleted:",t->data);
    }
}
void delete_end(){
    if(Head==NULL){
        printf("linkedlis is empty");
    }else{
       Node t2=Head;
       while(t2->right->right!=NULL){
           t2=t2->right;
       }
       t2->right=NULL;

    }

}
void insert_Pos(int idx,int i ){
   
    Node temp=(Node)malloc(sizeof(struct node));
    Node temp1=Head;
    temp->data=i;
    if(idx==0){
        insert_beg(i);
    }else{ 
        for(int j=0;j<idx-1;j++){
           temp1=temp1->right;
        }
        temp->left=temp1;
        temp->right=temp1->right;
        temp1->right=temp;
        temp->right->left=temp1;


    }

}
void delete_pos(int idx){
    Node temp2=Head;
    if(idx==0){
        delete_beg();
    }else{
        for(int i=0;i<idx-1;i++){
            temp2=temp2->right;

        }
        temp2->right=temp2->right->right;
        temp2->right->left=temp2;
    }


}


