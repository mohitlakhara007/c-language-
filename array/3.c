#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int i,sum=0;
	for(i=0; i<=10; i++)
	{
		printf("%d ",a[i]);
		sum=a[i]+sum;
	}
	printf("%d ",sum);	
}
