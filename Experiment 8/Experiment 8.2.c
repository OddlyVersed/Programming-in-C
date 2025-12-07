#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    int i_arr[] = {10, 20, 30};
    float f_arr[] = {1.5f, 2.5f, 3.5f};
    char c_arr[] = {'A', 'B', 'C'};

    int *i_ptr = i_arr;
    float *f_ptr = f_arr;
    char *c_ptr = c_arr;

    printf("Initial Int Address: %p\n", i_ptr);
    printf("Initial Int Value: %d\n", *i_ptr);
    i_ptr++;
    printf("Int++ Address: %p\n", i_ptr);
    printf("Int++ Value: %d\n", *i_ptr);
    i_ptr--;

    printf("Initial Float Address: %p\n", f_ptr);
    printf("Initial Float Value: %.1f\n", *f_ptr);
    f_ptr++;
    printf("Float++ Address: %p\n", f_ptr);
    printf("Float++ Value: %.1f\n", *f_ptr);
    f_ptr--;
    
    printf("Initial Char Address: %p\n", c_ptr);
    printf("Initial Char Value: %c\n", *c_ptr);
    c_ptr++;
    printf("Char++ Address: %p\n", c_ptr);
    printf("Char++ Value: %c\n", *c_ptr);
    c_ptr--;

    return 0;
}
