//Develop a Program to count the total number of digits in a number.
#include<stdio.h>

void main()
{
	int n,count;
	printf("enter n : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		count++;
	}
	
	
	printf("count = %d",count);
}
