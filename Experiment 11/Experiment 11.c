/* Experiment 11: Bitwise Operator
1. 2. Write a program to apply bitwise OR, AND and NOT operators on bit level.
Write a program to apply left shift and right shift operator. */
#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    int a = 12; 
    int b = 25; 
    int res;

    printf("A: %d\n", a);
    printf("B: %d\n", b);

    res = a | b; 
    printf("A | B: %d\n", res);

    res = a & b; 
    printf("A & B: %d\n", res);

    res = ~a; 
    printf("~A: %d\n", res);
    
    res = a << 2; 
    printf("A << 2: %d\n", res);
    
    res = b >> 1; 
    printf("B >> 1: %d\n", res);

    return 0;
}
