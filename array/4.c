#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int i,average=0,sum;

	for(i=0; i<=10; i++)
	{
		printf("%d \n",a[i]);
		sum=(a[i]+sum);
	}
	average=(sum)/15;
	printf("average %d ",average);
	
	
}
