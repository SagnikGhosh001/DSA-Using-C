#include<stdio.h>
void search(int n)
{
	int arr[10],i,search;
	for(i=0;i<n;i++)
	{
		printf("enter the element:-");
		scanf("%d",&arr[i]);
	}
	printf("please enter the search element:-");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			printf("the position is:-%d",i+1);
			break;
		}
	}
	if(arr[i]!=search)
	printf("does not found");
}
void main()
{
	int n,arr[10];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	search(n);
}
