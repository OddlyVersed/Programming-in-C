/* 6.3. Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num. */
#include <stdio.h>

int FIBO(int num) {
    if (num == 0) {
        return 0;
    }
    if (num == 1) {
        return 1;
    }
    return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    int n, i;

    printf("Enter the number of terms (n) for the Fibonacci sequence: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Number of terms must be non-negative.\n");
        return 0;
    }

    printf("Fibonacci Sequence (up to %d terms):\n", n);
    
    for (i = 0; i < n; i++) {
        printf("%d ", FIBO(i));
    }
    printf("\n");

    return 0;
}
