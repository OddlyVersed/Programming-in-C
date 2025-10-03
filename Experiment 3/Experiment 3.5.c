/* Experiment 3.1: Conditional Statements 
5. According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/
#include<stdio.h>
int main()
{
printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
	int yr, i, day=0, a;
	printf("Enter the year:"); scanf("%d", &yr);
	for(i=1; i<yr; i++)
	{
	    if(((i%4==0) && (i%100!=0)) && (i%400))
	    {
	    	day=day+366;
		}
		else
		{
			day=day+365;
		}
	}
	a=day%7;
	switch (a)
	{
		case 0:
			printf("Monday");
			break;
		case 1:
			printf("Tuesday");
			break;
		case 2:
			printf("Wednesday");
			break;
		case 3:
			printf("Thursday");
			break;
		case 4:
			printf("Friday");
			break;
		case 5:
			printf("Saturday");
			break;
		default:
			printf("Sunday");
		
	}
	printf("\n--------------------------------\n");
	return 0;
	
}
