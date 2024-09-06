#include<stdio.h>
#include<conio.h>

int main()
 {
	int a,firstDigit, lastDigit, sum;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	lastDigit = a % 10;
	
	firstDigit = a;
	while(firstDigit>=10)
	
		{
		    firstDigit/=10;
	    }

    sum =firstDigit+lastDigit;

    printf("Sum of first or last digit = %d\n", sum);
}

