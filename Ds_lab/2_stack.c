#include<stdio.h>
#include<stdlib.h>
#define size 5//macro
int stack[size],top=-1;//global var
void push(int data)
{
	if(top==size-1)
	{
		printf("Stack is full");
	}
	else{
		stack[++top]=data;
	}
}
void pop()
{
	if(top==-1)
	printf("Stack is empty");
		else{
		printf("%d is poped element",stack[top--]);
	}
}
void main()
{
	int ch,data;
	do{
	printf("\n1.push\n2.pop\n3exit\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("enter the data: ");
			scanf("%d",&data);
			push(data);
			break;
		case 2:
			pop();
			break;
		case 3:
			exit(0);
			break;
		default:
			printf("Choose correct option");
	}
	}while(1);

}
