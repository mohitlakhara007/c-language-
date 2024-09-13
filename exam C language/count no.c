#include<stdio.h>
void main()
{
	int n,count;
	printf("enter the value of N : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		count++;	
	}
	printf("count : %d",count);
}
