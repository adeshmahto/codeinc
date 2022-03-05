#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct slist
{
	int info;
	struct slist *next;
}snode;
snode *HEAD;
void createEmptyNode()
{
	HEAD=(snode*)NULL;
};
snode* createNode()
{
	snode *newNode;
	int val;
	newNode=(snode*)malloc(sizeof(snode));
	printf("\nENTER ANY VALUE: ");
	scanf("%d", &val);
	newNode->info=val;
	return newNode;
};
void insAtBeg()
{
	snode *nwNode;
	nwNode=createNode();
	nwNode->next=HEAD;
	HEAD=nwNode;
};
void insAtEnd()
{
	snode *nwNode, *last;
	nwNode=createNode();
	nwNode->next=(snode*)NULL;
	if(HEAD==(snode*)NULL)
	{
		HEAD=nwNode;
	}
	else
	{
		last=HEAD;
		while(last->next!=(snode*)NULL)
			last=last->next;
		last->next=nwNode;
	}
};
void delFromBeg()
{
	snode *temp;
	if(HEAD==(snode*)NULL)
	{
		printf("\nEMPTY LIST.");
	}
	else if(HEAD->next==(snode*)NULL)
	{
		printf("\nTHE DELETED NODE VALUE IS %d",HEAD->info);
		free(HEAD);
		createEmptyNode();
	}
	else
	{
		temp=HEAD;
		HEAD=HEAD->next;
		printf("\nTHE DELETED NODE VALUE IS %d",temp->info);
		free(temp);
	}
}
void delFromEnd()
{
	snode *slast, *last;
	if(HEAD==(snode*)NULL)
	{
		printf("\nEMPTY LIST.");
	}
	else if(HEAD->next==(snode*)NULL)
	{
		printf("\nTHE DELETED NODE VALUE IS %d",HEAD->info);
		free(HEAD);
		createEmptyNode();
	}
	else
	{
		slast=HEAD;
		last=HEAD->next;
		while(last->next!=(snode*)NULL)
		{
			slast=slast->next;
			last=last->next;
		}
		
		printf("\nTHE DELETED NODE VALUE IS %d",last->info);
		
		free(last);
		slast->next=(snode*)NULL;
	}
};
	
void display()
{
	snode *D;
	printf("\nTHE SINGLE LINK LIST VALUES ARE: ");
	while(D!=(snode*)NULL)
	{
		printf("%d ",D->info);
		 D=D->next;
	}
};	
			
void main()
{
	int ch;
	createEmptyNode();
	do
	{

		printf("\nENTER\n1. TO INSERT AT BEGINNING.\n2. TO INSERT AT END.\n3. TO DELETE FOM BEGINNING.\n4. TO DELETE FROM END.\n5. TO DISPLAY FORWARD.\n6. TO EXIT.");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				insAtBeg();
				break;
			case 2:
				insAtEnd();
				break;
			case 3:
				delFromBeg();
			
				break;
			case 4:
				delFromEnd();
			
				break;
			case 5:
				display();
			
				break;
			case 6:
				printf("\nEXITING...");
			
				break;
			default:
				printf("\nWRONG CHOICE.");
			
				break;
		}
	}while(ch!=6);
}