#include<stdio.h>

main()
{

int i,j,a,b,k;
    for (i=5;i>=1;i--)
    { 
        for (j=1;j<=i;j++) 
        {                  
            printf("%d",j);
        }   
        for (a=5;a>i;a--)
        {
            printf("  ");
        }
        for (k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n"); 
    }
}
