/*Experiment 3: Conditional Statements
6. WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.*/
#include <stdio.h>
int main() 
{
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    float l1, b1, l2, b2, l3, b3;
    float p1, p2, p3;
    float mp;

    printf("Enter length and breadth for Rectangle 1: ");
    scanf("%f %f", &l1, &b1);
    p1 = 2 * (l1 + b1);

    printf("Enter length and breadth for Rectangle 2: ");
    scanf("%f %f", &l2, &b2);
    p2 = 2 * (l2 + b2);

    printf("Enter length and breadth for Rectangle 3: ");
    scanf("%f %f", &l3, &b3);
    p3 = 2 * (l3 + b3);

    mp = (p1 > p2) ? ((p1 > p3) ? p1 : p3) :  ((p2 > p3) ? p2 : p3);
    
    printf("The highest perimeter: %f\n", mp);
printf("\n--------------------------------\n");
    return 0;
}
