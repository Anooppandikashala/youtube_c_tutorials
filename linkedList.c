
#include<stdio.h>
#include<stdlib.h>


//Node Creation

struct Node
{
	int data;
	struct Node *link;
};

struct Node *head=NULL;

struct Node* createNode(int data)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->link = NULL;
	
	return temp;
}


void insertNode(int data)
{
	if( head == NULL)
	{
		head = createNode(data);
	}
	else
	{
		struct Node *temp = head;
		while(temp->link != NULL)
		{
			temp = temp->link;
		}
		
		struct Node *newNode = createNode(data);
		temp->link = newNode;
	}
}

void printLinkedList()
{
	struct Node *temp = head;
	int i=1;
	
	while(temp!= NULL)
	{
		printf("\nNode %d : %d ",i,temp->data);
		temp = temp->link;
		i++;
	}
}

void deleteLinkedList()
{
	struct Node *temp = head;
	while(temp != NULL)
	{
		struct Node *t  = temp->link;
		//temp = temp->link;
		free(temp);
		temp = t;
		
	}
}

void main()
{
	int n,i,data;
	
	printf("\nEnter the number of nodes");
	scanf("%d",&n);
	
	i=0;
	while(i<n)
	{
		printf("Enter the %d Node :",i+1);
		scanf("%d",&data);
		insertNode(data);
		i++;
	}
	
	printLinkedList();
	deleteLinkedList();
	printLinkedList();
	
}















