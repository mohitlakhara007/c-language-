#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	printf("Enter A : ");
	scanf("%d",&a);
	
	int b;
	printf("Enter B : ");
	scanf("%d",&b);
	
	int c;
	printf("Enter C : ");
	scanf("%d",&c);
	
		int d;
	printf("Enter D : ");
	scanf("%d",&d);
	
	
	
	(a>b)?(a>c)?(a>d)?printf("A is maximum"):printf("D is maximum"):
	(c>d)?printf("C is maximum"):printf("D is maximum"):
	(b>c)?(b>d)?printf("B is maximum"):printf("D is maximum"):
	(c>d)?printf("C is maximum"):printf("D is maximum");
	

        	
}
