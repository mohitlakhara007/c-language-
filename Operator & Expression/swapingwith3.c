#include<stdio.h>
#include<conio.h>

void main()

{
	int x;
	
	printf("x=",x);
	scanf("%d",&x);
	
	int y;
	
	printf("y=",y);
	scanf("%d",&y);
	
	int z;
	
	z=x;
	x=y;
	y=z;
	
	//printf("after swaping\n");
	
	printf("x=%d\n",x);
    printf("y=%d",y);
    
	
	
	
}
