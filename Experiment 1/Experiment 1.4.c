/*Experiment 1: installation, Environment setup and starting with C language
4. Write a C program to perform any four arithmetic operation on two variable. */
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
    int sub=0;
     sub = a - b;
    printf("the subtract of a and b is = %d\n",sub);
    int mul=0;
      mul = a * b;
    printf("the multification of a and b is = %d\n",mul); 
    float div;
      div = (float)a / b;
    printf("the division of a and b is = %f",div);
     printf("\n--------------------------------\n");
    return 0;
}
