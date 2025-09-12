/*Experiment 2: Operators
1. WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.*/
#include <stdio.h>
int main()
{
     printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    int length,width;
    printf("Enter  length in feet = "); 
    scanf("%d",&length);
    printf("Enter width in feet = "); 
    scanf("%d",&width);
    int parameter=0;
    parameter = 2*( length + width );
    printf("The parameter is = %d feet\n", parameter);

    int area;
     area = length * width;
    printf("The area is = %d sq.ft",area);
    printf("\n--------------------------------\n");

    return 0;
}
