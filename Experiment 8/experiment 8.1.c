#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    int i_var = 19;
    float f_var = 70.5f;
    char c_var = 'D';

    int *i_ptr = &i_var;
    float *f_ptr = &f_var;
    char *c_ptr = &c_var;

    printf("--- Integer Data ---\n");
    printf("Variable Value (i_var): %d\n", i_var);
    printf("Pointer Address (i_ptr): %p\n", i_ptr);
    printf("Dereferenced Value (*i_ptr): %d\n", *i_ptr);

    printf("\n--- Float Data ---\n");
    printf("Variable Value (f_var): %.2f\n", f_var);
    printf("Pointer Address (f_ptr): %p\n", f_ptr);
    printf("Dereferenced Value (*f_ptr): %.2f\n", *f_ptr);

    printf("\n--- Character Data ---\n");
    printf("Variable Value (c_var): %c\n", c_var);
    printf("Pointer Address (c_ptr): %p\n", c_ptr);
    printf("Dereferenced Value (*c_ptr): %c\n", *c_ptr);

    return 0;
}
