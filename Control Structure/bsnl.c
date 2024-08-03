#include<stdio.h>
#include<conio.h>

void main()
{
	printf("welcome bharat sanchar nigam limited (BSNL)\n");
	printf("1.ENGLISH\n");
	printf("2.HINDI\n");
	printf("3.GUJARATI\n\n");
	
	int a;
	printf("Enter the choise language 1-3 : ");
	scanf("%d",&a);
	
	switch(a)
     	{
		case 1 : printf("\n-> you press english\n");
			break;
		case 2 : printf("\n-> aapne hindi dbaya hai\n");
			break;	
		case 3 : printf("\n-> tame gujarati dbaya cho\n\n");
			break;	
		default : printf("\n->invaid number sorry !\n");
		}
		
		

	
}
