#include<stdio.h>
void main()
{
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1)
			{
				printf("M ");
			}
			
			
			
			else if(j==5)
			{
				printf("M ");
			}
			
			else if(i==2 && j==2)
			{
				printf("M ");
			}
			
			else if(i==2 && j==4)
			{
				printf("M ");
			}	
			
			else if(i==3 && j==3)
			{
				printf("M ");
			}
			
		
			
			else
			{
				printf("  ");
			}
		
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==5||j==1||i==5)
			{
				printf("O ");
			}
			else
			{
				printf("  ");
			}
			
		}
			printf("\n");
	}
		printf("\n");
		
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1||j==5||i==3)
			{
				printf("H ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||i==5||j==3)
			{
				printf("I ");
			}
			else
			{
				printf("  ");
			}
			
		}
		printf("\n");
	}
	printf("\n");
	
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==3)
			{
				printf("T ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
