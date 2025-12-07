/* Experiment 12: Preprocessor and Directives in C
1. Write a program to define some constant variable in preprocessor. */
#include <stdio.h>

#define PI 3.14159
#define MAX_SIZE 100
#define GREETING "Hello, Preprocessor World!"

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    float radius = 5.0;
    float area = PI * radius * radius;
    int size = MAX_SIZE;

    printf("Defined Constant PI: %.5f\n", PI);
    printf("Defined Constant MAX_SIZE: %d\n", MAX_SIZE);
    printf("Defined Constant GREETING: %s\n", GREETING);

    printf("Area of circle with radius 5.0: %.2f\n", area);
    printf("Maximum array size defined: %d\n", size);

    return 0;
}
