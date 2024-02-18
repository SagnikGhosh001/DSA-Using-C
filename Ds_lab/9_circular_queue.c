#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
	int data;
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
		temp->next=head;
	}
	else
	{
		t = head;
		while (t->next != head)
		{
			t = t->next;
		}
		t->next = temp;
		temp->next=head;
	}
}
void deleteNode()
{
	struct node *node,*t;
	node = head;
	t=head;
	if (head == NULL)
	{
		printf("the list is empty\n");
	}
	else if(node->next==head)
	{
		head=NULL;
	}
	else
	{
		while(node->next!=head)
		{
			node=node->next;
		}
		head=head->next;
		node->next=head;
		free(t);
	}
}
void display()
{
	struct node *t;
	if (head == NULL)
		printf("list is empty\n");
	else
	{
		t = head;
		do
		{
			printf(" %d ", t->data);
			t = t->next;
		}while(t != head);
	}
}
void main()
{
	int ch;
	do
	{
		printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
		printf("Enter your choise:-");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			insertNode();
			break;
		case 2:
			deleteNode();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Invalid Input\n");
		}
	} while (1);
}
