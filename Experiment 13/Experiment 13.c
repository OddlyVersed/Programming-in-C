/* Experiment 13: Macros in C
1. Write a program to define multiple macro to perform arithmetic functions. */
#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUBTRACT(a, b) ((a) - (b))
#define MULTIPLY(a, b) ((a) * (b))
#define DIVIDE(a, b) ((a) / (b))
#define SQUARE(a) ((a) * (a))

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    int x = 15;
    int y = 5;
    float f_x = 10.0;
    float f_y = 3.0;

    printf("X = %d, Y = %d\n", x, y);

    printf("Addition (X + Y): %d\n", ADD(x, y));
    printf("Subtraction (X - Y): %d\n", SUBTRACT(x, y));
    printf("Multiplication (X * Y): %d\n", MULTIPLY(x, y));
    printf("Division (X / Y): %d\n", DIVIDE(x, y));
    printf("Square (X * X): %d\n", SQUARE(x));
    
    printf("\nFloating Point Division (10.0 / 3.0): %.2f\n", DIVIDE(f_x, f_y));

    return 0;
}
