#include<stdio.h>

 main()
{
	//Develop a program that takes a score out of 100 as input from the user and calculates the
	//corresponding grade using a ternary operator. Allocate grades from A to F for various ranges.
	int mark;
	char grade;
	
	printf("Enter your marks:");
	scanf("%d",&mark);
	
	
(mark>=90 && mark<=100)?
	
printf("Your Grade is A\n",grade='A')
	
:	
(mark>=80 && mark<90)?		
	printf("Your Grade is B\n",grade='B')
	
:	
	(mark>=70 && mark<80)?			
		printf("Your Grade is C\n",grade='C')
			
	:			
		(mark>=60 && mark<70)?				
			printf("Your Grade is D\n",grade='D')
				
		:				
			(mark>=33 && mark<60)?					
				printf("Your Grade is E\n",grade='E')
				
			:					
				(mark>=0 && mark<33)?						
					printf("Your Grade is F\n",grade='F')
						
				:					
				

	
	//Extend the program to provide additional comments based on the grade using a switch-case
//statement. For example, if the grade is ‘A’, then print ‘Excellent work!’. If the grade is ‘B’, then
//print ‘Well done’. If the grade is ‘C’, then print ‘Good job’. If the grade is ‘D’, then print ‘You
//passed, but you could do better’. And if the grade is ‘F’, then print ‘Sorry, you failed’.
	  switch (grade) 
	  {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("You passed, but you could do better\n");
            break;
        case 'F':
            printf("Sorry, you failed\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
}
	
//	Further, extend the program to check eligibility for the next level based on the grade using an
//if-else statement. Print ‘Congratulations! You are eligible for the next level’ if the grade is from
//‘A’ to ‘D’. Print ‘Please try again next time’ if the grade is ‘F’.

		 if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf("Congratulations! You are eligible for the next level.\n");
    } else if (grade == 'F'){
        printf("Please try again next time.\n");
    } else {
        printf("Invalid grade entered.\n");
    }
	
}

