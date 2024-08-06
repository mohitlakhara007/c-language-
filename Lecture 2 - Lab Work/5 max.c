//WAP to Find minimum from given 5 number using nested if else.
#include<stdio.h>

main()
{
	int a,b,c,d,e;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	printf("enter c : ");
	scanf("%d",&c);
	printf("enter d : ");
	scanf("%d",&d);
	printf("enter e : ");
	scanf("%d",&e);	
	
	
	//abcde
	if(a>b)
	{
		//acde
		if(a>c)
		{
			//ade
			if(a>d)
			{
				//ae
				if(a>e)
				{
					printf("a is maximum");	
				}
				else
				{
					printf("e is maximum");
				}	
			}
			else
			{
				//de
				if(d>e)
				{
					printf("d is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}
		}
		else
		{
			//cde
			if(c>d)
			{
				if(c>e)
				{
					printf("c is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}
			else
			{
				//de
				if(d>e)
				{
					printf("d is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}
		}
	}
	else
	{
		//bcde
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("b is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}
			else
			{
				//de
				if(d>e)
				{
					printf("d is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}
		}
		else
		{
			//cde
			if(c>d)
			{
				if(c>e)
				{
					printf("c is maximum");
				}
				else
				{
					printf("e is maximum");
				}
				}
				else
				{	if(d>e)
				{
					printf("d is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}	
		}
	}
}

