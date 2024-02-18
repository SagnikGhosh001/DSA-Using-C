#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
	int data,item;
	struct node *next;
};
struct node *head = NULL;
struct node *createNode()
{
	struct node *n;
	n = (struct node *)malloc(sizeof(struct node *));
	return n;
}
void insertNode()
{
	struct node *temp, *t;
	temp = createNode();
	printf("Enter the data: ");
	scanf("%d", &temp->data);
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		t = head;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = temp;
	}
}
void insertNodeBeg()
{
	struct node *temp;
	temp = createNode();
	printf("Enter the data: ");
	scanf("%d", &temp->data);
	temp->next = head;
	head = temp;
}
void insertNodeAfIndex()
{
	struct node *temp, *t;
	int index,count=0;
	temp=createNode();
	printf("Enter the index the node to be inserted:-");
	scanf("%d", &index);
	printf("Enter the data:-");
	scanf("%d", &temp->data);
	temp->next = NULL;
	t = head;
	while (count != index)
	{
		count++;
		t = t->next;
	}
	if (t == NULL)
	{
		printf("Index not found\n");
	}
	else
	{
		temp->next = t->next;
		t->next = temp;
	}
}
void insertNodeAfValue(item)
{
	struct node *temp, *t;
	temp=createNode();
	printf("Enter the item after which the node to be inserted:-");
	scanf("%d", &item);
	printf("Enter the data:-");
	scanf("%d", &temp->data);
	temp->next = NULL;
	t = head;
	while (t != NULL && t->data != item)
	{
		t = t->next;
	}
	if (t == NULL)
	{
		printf("Item not found\n");
	}
	else
	{
		temp->next = t->next;
		t->next = temp;
	}
}
void deleteNode()
{
	struct node *t, *node;
	t = head;
	node = head;
	if (head == NULL)
	{
		printf("The list is empty\n");
	}
	else
	{
		while (t->next != NULL)
		{
			node = t;
			t = t->next;
		}
		node->next = NULL;
		free(t);
	}
}
void deleteNodeBeg()
{
	struct node *node;
	node = head;
	if (head == NULL)
	{
		printf("the list is empty\n");
	}
	else
	{
		head = head->next;
		free(node);
	}
}
void deleteNodeAfValue(item)
{
	struct node *t, *node;
	printf("Enter the item after which the next node is deleted:-");
	scanf("%d", &item);
	t = head;
	if (head == NULL)
	{
		printf("The list is empty\n");
	}
	else if (t->data == item && t->next == NULL)
	{
		printf("This is the single node,deletion can't possible\n");
	}
	else
	{
		while (t != NULL && t->data != item)
		{
			t = t->next;
		}
		if (t->next == NULL)
		{
			printf("deletion can't possible\n");
		}
		else
		{
			node = t;
			t = t->next;
			node->next = t->next;
			free(t);
		}
	}
}
void deleteNodeAfIndex()
{
	struct node *t, *node;
	int index,count=0;
	printf("Enter the index after where the next node is deleted:-");
	scanf("%d", &index);
	t = head;
	if (head == NULL)
	{
		printf("The list is empty\n");
	}
	else
	{
		while (count != index)
		{
			count++;
			t = t->next;
		}
		if (t->next == NULL)
		{
			printf("deletion can't possible\n");
		}
		else
		{
			node = t;
			t = t->next;
			node->next = t->next;
			free(t);
		}
	}
}
void search(item)
{
	struct node *t;
	int count=1;
	t=head;
	printf("Enter the item to search:-");
	scanf("%d", &item);
	if (head == NULL)
	{
		printf("The list is empty\n");
	}
	else
	{
		while (t != NULL && t->data != item)
		{
			count++;
			t=t->next;
		}
		if (t == NULL)
		{
			printf("Item not found\n");
		}
		else
		{
			printf("The position is %d\n",count);
		}
	}
}
void reverse()
{
	struct node *prev, *temp, *ptr,*t;
	if (head == NULL)
		printf("list is empty\n");
	else
	{
		temp = head;
		prev=temp->next;
		temp->next=NULL;
		while (prev->next != NULL)
		{
			ptr=prev->next;
			prev->next=temp;
			temp=prev;
			prev=ptr;
		}
		prev->next=temp;
		head=prev;
		t = head;
		while (t != NULL)
		{
			printf(" %d ", t->data);
			t = t->next;
		}
	}
}
void main()
{
	int ch;
	do
	{
		printf("\n1.insert\n2.insert at begining\n3.insert after a given index\n4.insert after a given node\n5.delete\n6.delete begining\n7.delete after a given index\n8.delete after a given node\n9.search\n10.reverse\n11.exit\n");
		printf("Enter your choise:-");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			insertNode();
			break;
		case 2:
			insertNodeBeg();
			break;
		case 3:
			insertNodeAfIndex();
			break;
		case 4:
			insertNodeAfValue();
			break;
		case 5:
			deleteNode();
			break;
		case 6:
			deleteNodeBeg();
			break;
		case 7:
			deleteNodeAfIndex();
			break;
		case 8:
			deleteNodeAfValue();
			break;
		case 9:
			search();
			break;
		case 10:
			reverse();
			break;
		case 11:
			exit(0);
			break;
		default:
			printf("Invalid Input\n");
		}
	} while (1);
}
