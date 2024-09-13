#include<stdio.h>
void main()
{
	int age;
	printf("enter your Age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("your are eligible for vote ");
	}
	else
	{
		printf("your are not eligible for vote ");	
	}
}
