/*Experiment 3.1: Conditional Statements
1.⁠ ⁠Write a C program to check whether a number is Even or ODD*/
#include <stdio.h>
int main()
{
int a;
printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    printf("Enter the number = ");
	scanf("%d",&a);
	
	{
		if (a%2==0)
		printf("the number a is even");
		
		else 
		printf("the number a is odd");
	}
	printf("\n--------------------------------\n");
	return 0;
}

