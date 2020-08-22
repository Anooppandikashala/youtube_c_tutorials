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

struct Node* search(int data)
{
	struct Node *temp = head;
	while(temp != NULL)
	{
		if(temp->data == data)
		{
			return temp;
		}
		temp = temp->link;		
	}
	
	return temp;
}
void insertNodeLast()
{

	int data;
	printf("\nEnter the data to add");
	scanf("%d",&data);
	
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

void insertNodeBefore()
{
	int data;
	printf("\nEnter the position data");
	scanf("%d",&data);
	
	struct Node *temp = search(data);
	
	if(temp == NULL)
	{
		printf("\nData Not found");
		return;
	}
	
	if(data == head->data)
	{
		printf("\nEnter the data to insert");
		scanf("%d",&data);
		
		struct Node *newNode = createNode(data);
		newNode->link = head;
		head = newNode;
		return;
	}
	else
	{
		struct Node *temp = head;
		struct Node *nextNode;
		struct Node *prevNode;
		while(temp != NULL)
		{
			nextNode = temp->link;
			if(nextNode->data == data)
			{
				printf("\nEnter the data to insert");
				scanf("%d",&data);
				prevNode = temp;
				break;
			}
			
			temp= temp->link;
		}
		
		struct Node *newNode = createNode(data);
		prevNode->link = newNode;
		newNode->link = nextNode;
	}
	
}

void insertAfter()
{
	int data;
	printf("\nEnter the position data");
	scanf("%d",&data);
	
	struct Node *position = search(data);
	
	if(position == NULL)
	{
		printf("\nData Not found");
		return;
	}
	else
	{
		printf("\nEnter the data to insert");
		scanf("%d",&data);
		
		if(position->link == NULL)
		{
			struct Node *newNode = createNode(data);
			position->link = newNode;
		}
		else
		{
			struct Node *nextNode = position->link;
			struct Node *newNode = createNode(data);
			
			position->link = newNode;
			newNode->link = nextNode;
		}
	}
}

void printLinkedList()
{
	struct Node *temp = head;
	int i=1;
	printf("\n");
	while(temp!= NULL)
	{
		printf(" %d ",temp->data);
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

void printSearch()
{
	int data;
	printf("\nEnter the data to search");
	scanf("%d",&data);
	
	struct Node *temp = search(data);
	
	if(temp == NULL)
	{
		printf("\nData Not found");
		return;
	}
	printf("\nData found");
	
}

void deleteNode()
{
	int data;
	printf("\nEnter the data to delete");
	scanf("%d",&data);
	
	struct Node *position = search(data);
	
	if(position == NULL)
	{
		printf("\nData Not found");
		return;
	}
	
	if(position == head)
	{
		head = head->link;
		position->link = NULL;
		free(position);
		return;
	}
	
	struct Node *temp = head;
	struct Node *delNode, *nextNode, *prevNode;
	
	while(temp != NULL)
	{
		delNode = temp->link;
		nextNode = delNode->link;
		
		if(delNode->data  == data)
		{
			prevNode = temp;
			break;
		}
		
		temp= temp->link;
	}
	
	free(delNode);
	prevNode->link = nextNode;	
	
}

void sortAsc()
{
	if(head == NULL)
		return;
	struct Node *temp = head;
	
	while(temp->link != NULL)
	{
		struct Node *nextNode = temp->link;
		while(nextNode != NULL)
		{
			if(temp->data > nextNode->data)
			{
				int t = temp->data;
				temp->data = nextNode->data;
				nextNode->data = t;
				
			}
			
			nextNode = nextNode->link;
		}
		
		temp = temp->link;
	}	
	
}

void sortDesc()
{
	if(head == NULL)
		return;
	struct Node *temp = head;
	
	while(temp->link != NULL)
	{
		struct Node *nextNode = temp->link;
		while(nextNode != NULL)
		{
			if(temp->data < nextNode->data)
			{
				int t = temp->data;
				temp->data = nextNode->data;
				nextNode->data = t;
				
			}
			
			nextNode = nextNode->link;
		}
		
		temp = temp->link;
	}	
	
}


void printOptions()
{
	printf("\n******** MENU ************");
	printf("\n   1 : Insert last");
	printf("\n   2 : Search");
	printf("\n   3 : Print");
	printf("\n   4 : Insert before");
	printf("\n   5 : Insert after");
	printf("\n   6 : Delete a Node");
	printf("\n   7 : Sort ASC");
	printf("\n   8 : Sort DESC");
	printf("\n\n   0  to Quit ");
	printf("\n**************************\n");
}

void main()
{
	int key=0;
	
	do
	{
		printOptions();
		scanf("%d",&key);
		
		switch(key)
		{
			case 1:
			{
				insertNodeLast();
				printLinkedList();
				break;
			}
			case 2:
			{
				printSearch();
				break;
			}
			case 3:
			{
				printLinkedList();
				break;
			}
			case 4:
			{
				insertNodeBefore();
				printLinkedList();
				break;
			}
			case 5:
			{
				insertAfter();
				printLinkedList();
				break;
			}
			case 6:
			{
				deleteNode();
				printLinkedList();
				break;
			}
			case 7:
			{
				sortAsc();
				printLinkedList();
				break;
			}
			case 8:
			{
				sortDesc();
				printLinkedList();
				break;
			}
		}
		
	}
	while(key);
	
	deleteLinkedList();
}















