#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter your science marks: ");
    scanf("%d", &a);
    
    printf("Enter your maths marks: ");
    scanf("%d", &b);
    
    printf("Enter your english marks: ");
    scanf("%d", &c);
    
    float average = (a + b + c) / 3.0;

    printf("Your average marks are: %.2f\n", average);
    
    if(average>=90 && average<100)
    {
    	printf("grade A+");
	}
	else if(average<=89 && average>80)
	{
			printf("grade A");
	}
		else if(average<=79 && average>70)
	{
			printf("grade B1");
	}
		else if(average<=69 && average>60)
	{
			printf("grade B2");
	}	
	else 
	{
			printf("fail");
	}	
}

