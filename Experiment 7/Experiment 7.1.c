#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

void read(struct Complex *c, char name) {
    printf("Enter the real and imaginary parts of Complex Number %c (e.g., 3.5 2.0): ", name);
    scanf("%f %f", &c->real, &c->imag);
}

void write(struct Complex c, char name) {
    printf("Complex Number %c: %.2f + %.2fi\n", name, c.real, c.imag);
}

struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex subtract(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    struct Complex cA, cB, cSum, cDiff;

    read(&cA, 'A');
    read(&cB, 'B');

    printf("\nInput Verification:\n");
    write(cA, 'A');
    write(cB, 'B');

    cSum = add(cA, cB);
    cDiff = subtract(cA, cB);

    printf("\nResults:\n");
    printf("Addition: ");
    write(cSum, ' ');
    
    printf("Subtraction: ");
    write(cDiff, ' ');

    return 0;
}
