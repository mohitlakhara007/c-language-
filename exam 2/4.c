#include<stdio.h>

void main()
{
	int a,b,sum;
	
	printf("Enter the num A : ");
	scanf("%d",&a);
	
	printf("Enter the num B : ");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("A is max");
	}
	else
	{
		printf("B is max");
	}
		printf("\n"); 
	 sum=a+b;
	 
	 printf("%d + %d = %d",a,b,sum);
	
	
}
