#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node *snode;

snode Head, h, n;

void display(snode);
void evenList(void);
void oddList(void);

void main()
{
    int i;
    printf("\n Enter the data (-1000 to stop):\n");
    for (;;)
    {
        scanf("%d", &i);
        if (i == -1000)
        {
            break;
        }
        if (Head == NULL) // Create 1st Node(Head Node)
        {
            Head = h = (snode)malloc(sizeof(struct Node));
            Head->data = i;
            Head->next = NULL;
        }
        else // Create other nodes
        {
            n = (snode)malloc(sizeof(struct Node));
            n->data = i;
            n->next = NULL;
            h->next = n;
            h = n;
        }
    }

    display(Head);
    evenList();
    //oddList();

    printf("\n\n*|| END OF THE PROGRAM ||*\n\n");
}

//---------------------------------------------------------------------------------------------------------------------

void display(snode a)
{
    printf("\n Data of the Linked List are:\n");
    while (a != NULL)
    {
        printf(" [%d]", a->data);
        a = a->next;
    }
}

//(Case 1)-------------------------------------------------------------------------------------------------------------

void evenList()
{
  snode Head1,temp,n1,h1;
  temp=Head;
  while(temp!=NULL){
    
    if(Head1==NULL && (temp->data)%2==0){
        Head1 = h1 = (snode)malloc(sizeof(struct Node));
        Head1->data=temp->data;
        Head1->next=NULL;
        

    }
    else if(Head!=NULL && temp->data %2==0){
        n1=(snode)malloc(sizeof(struct Node));
        n1->data=temp->data;
        n1->next=NULL;
        h1->next=n1;
        h1=n1;
      
    }
       temp=temp->next;
     
  }

    printf("\n\n LL with even elements are:\n");
    display(Head1);
}

//(Case] 2)------------------------------------------------------------------------------------------------------------

void oddList()
{
    snode Head2, x2, n2;
     //x2 = Head2;
     Head2 = (snode)malloc(sizeof(struct Node));
     x2 = (snode)malloc(sizeof(struct Node));
    for (Head2 = Head; (Head2->next) != NULL; Head2 = Head2->next);
    {
        if (Head2 == NULL && (Head2->data) % 2 != 0)
        {
            Head2->data = x2->data;
            Head2->next = NULL;
        }
        else if (Head2 != NULL && (Head2->data) % 2 != 0)
        {
           n2 = (snode)malloc(sizeof(struct Node));
           n2->data =  x2->data;
           n2->next = NULL;
           x2->next = n2;
           x2 = n2;
        }
    }
    printf("\n\n LL with odd elements are:\n");
    display(Head2);
}