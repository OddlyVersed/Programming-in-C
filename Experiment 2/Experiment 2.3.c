/*Experiment 2: Operators
3. WAP a C program to calculate compound interest*/
#include<stdio.h>
#include <math.h>
int main()
{
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
	float principle,rate,time,CI;
	printf("Enter the principle rs/- ");
	scanf("%f",&principle);
	printf("Enter the rate = ");
	scanf("%f",&rate);
	printf("Enter the time in year = ");
	scanf("%f",&time);
	CI=(principle * pow((1+rate/100),time)- principle);
	printf("the compound intrest is = %f rs", CI);
    printf("\n--------------------------------\n");
	return 0;
}


