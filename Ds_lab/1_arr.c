#include<stdio.h>
void main()
{
	int arr[10],n,i,search;
	printf("enter the number of terms:-");
	scanf("%d",&n);
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
