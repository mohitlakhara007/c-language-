// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j-	-)
		{
			printf("%d ",i);	
		}
		printf("\n");
	}
}
