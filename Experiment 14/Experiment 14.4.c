/* 6.4. Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges. */
#include <stdio.h>
#include <math.h>

int ISPRIME(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    int start, end, i;

    printf("Enter the starting range (start): ");
    scanf("%d", &start);
    
    printf("Enter the ending range (end): ");
    scanf("%d", &end);
    
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);
    
    for (i = start; i <= end; i++) {
        if (ISPRIME(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
