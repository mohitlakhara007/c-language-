#include <stdio.h>

int main() 
{
    int rows, cols, i, j;
    int sum = 0;

    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; 

    
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            printf("Enter element  (%d, %d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            sum += matrix[i][j];
        }
    }

    
    printf("The sum of all elements in the matrix is: %d\n", sum);


}
