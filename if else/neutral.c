#include<stdio.h>

void main()
{
	int a;
	printf("enter the value of a :");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("the value is Positive");
	}
	else if(a<0)
	{
		printf("the value is Negative");
	}
	else
	{
		printf("the value is neutral");
	}
	
	
}
