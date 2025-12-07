#include <stdio.h>

void modify_value(int *ptr) {
    *ptr = *ptr + 100;
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    int num = 42;

    printf("Initial Value (num): %d\n", num);
    
    modify_value(&num);

    printf("Value After Function Call: %d\n", num);

    return 0;
}
