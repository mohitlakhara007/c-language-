//Write a program to find the third angle of a right triangle when two other angles are given.
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("enter A = ");
	scanf("%d",&a); 
	
	printf("enter B = ");
	scanf("%d",&b); 
	
	c=a+b;
	
    printf("Third angle: %d",c-180);
}
