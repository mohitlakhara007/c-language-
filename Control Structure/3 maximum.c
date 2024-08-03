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
	
	(a>b)?(a>c)?printf("a is maximum "):printf("c is maximum "):(b>c)?printf("b is maximum "):printf("c is maximum ");
	
	
	
}
