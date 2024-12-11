#include <stdio.h>


int cube(int num) 
{
    return num * num * num;
}

int main() 
{
    int number, result;

    
    printf("Enter a number to find its cube: ");
    scanf("%d", &number);

   
    result = cube(number);

    
    printf("The cube of %d is: %d\n", number, result);

    
}
