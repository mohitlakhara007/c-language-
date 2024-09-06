#include<stdio.h>
void main()
{
	//Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a do-while loop.
	char i;
	for(i='a';i<='z'; i+=4)
	{
		printf(" %c ",i);	
	}
}


