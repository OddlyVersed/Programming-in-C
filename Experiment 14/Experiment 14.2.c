/* 6.2. Develop a recursive function GCD (num1, num2) that accepts two integer arguments. Write a C program that invokes this function to find the greatest common divisor of two given integers. */
#include <stdio.h>

int GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return GCD(num2, num1 % num2);
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    int a, b, result;

    printf("Enter the first integer (num1): ");
    scanf("%d", &a);
    
    printf("Enter the second integer (num2): ");
    scanf("%d", &b);
    

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a == 0 && b == 0) {
        printf("GCD is undefined for (0, 0).\n");
    } else {
        result = GCD(a, b);
        printf("The Greatest Common Divisor (GCD) of %d and %d is: %d\n", a, b, result);
    }

    return 0;
}
