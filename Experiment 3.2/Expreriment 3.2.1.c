/*Experiment 3.2: Loops  
1. WAP to enter numbers till the user wants. At the end, it should display the count of 
positive, negative, and Zeroes entered.*/ 
#include<stdio.h> 
int main() 
{ 
printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
int a0=0, ap=0, an=0; char op='y'; 
while (op=='y' || op=='Y') 
{ 
int i; 
printf("Enter the number:"); scanf("%d", &i); 
(i==0) ? a0++ : (i>0) ? ap++ : (i<0) ? an++ : printf("Invalid input"); 
printf("Do you want to continue? Enter y for yes, n for no"); scanf(" %c", 
&op);   
} 
printf("Number of Positive numbers entered are %d \nNumber of Zeros entered are %d \nNumber of negitive numbers entered are %d \n", ap, a0, an); 
printf("\n--------------------------------\n");
return 0; 
} 
