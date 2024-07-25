#include<stdio.h>

void main()
{
	int  salary,HRA,DA,TA,T1;
	printf("Enter the HRA = ");
	scanf("%d",&HRA);
	
	printf("Enter the DA = ");
	scanf("%d",&DA);
	
	printf("Enter the TA = ");
	scanf("%d",&TA);
	
	printf("Enter the Base Salary : ");
	scanf("%f",&salary);
	
	T1=HRA+DA+TA;
	
	
	
	HRA = T1 * HRA / 100;
	DA = salary * DA / 100;
	TA = salary *  / 100;
	

}
