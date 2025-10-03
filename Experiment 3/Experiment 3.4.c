/*Experiment 3: Conditional Statements
4. WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.*/
#include <stdio.h>
int main() 
{
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    float x1, y1, x2, y2, x3, y3;
    float area;

    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    if (area == 0) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }
  printf("\n--------------------------------\n");
    return 0;

}

