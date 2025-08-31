/*Experiment 1: installation, Environment setup and starting with C language
3. ⁠Write a C program to add two numbers and take a number from the user.
*/
#include <stdio.h>
int main()
{
     printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int a,b;
    printf("enter the value a = "); 
    scanf("%d",&a);
    printf("enter the value b = "); 
    scanf("%d",&b);
    int sum=0;
     sum = a + b;
    printf("the addition of a and b is = %d\n",sum);
     printf("\n--------------------------------\n");
    return 0;
}
