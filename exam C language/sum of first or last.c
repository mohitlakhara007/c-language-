#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,c, sum;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	c=a%10;
	
	 b = a;
	while(b>=10)
	
	{
	b/=10;
	}
    sum=b+c;
    printf("first or last sum is : %d\n", sum);
}

