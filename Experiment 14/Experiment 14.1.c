/* Experiment 6: Functions
6.1. Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT = 1, if n = 0. Otherwise, FACT = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages. */
#include <stdio.h>

long long factorial_iterative(int n) {
    long long result = 1;
    int i;
    if (n < 0) return 0;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long factorial_recursive(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

long long binomial_coefficient(int n, int r) {
    if (r < 0 || r > n) {
        return 0; 
    }
    long long n_fact = factorial_iterative(n);
    long long r_fact = factorial_iterative(r);
    long long n_minus_r_fact = factorial_iterative(n - r);
    
    if (r_fact == 0 || n_minus_r_fact == 0) {
        return 0;
    }

    return n_fact / (r_fact * n_minus_r_fact);
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    int n, r;
    long long result;

    printf("Enter value for n: ");
    scanf("%d", &n);
    
    printf("Enter value for r: ");
    scanf("%d", &r);
    
    result = binomial_coefficient(n, r);

    printf("\nBinomial Coefficient (nCr) Computation\n");
    printf("Result for C(%d, %d):\n", n, r);
    printf("%d! / (%d! * %d!) = %lld\n", n, r, n - r, result);
    
    printf("\nRecursive Factorial (%d!): %lld\n", n, factorial_recursive(n));
    printf("Iterative Factorial (%d!): %lld\n", n, factorial_iterative(n));

    return 0;
}
