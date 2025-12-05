#include <stdio.h>

#define NUM_EMPLOYEES 3

struct Employee {
    char name[50];
    float basic_pay;
    float da;
    float gross_salary;
};

void calculate_pay(struct Employee *emp_arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        emp_arr[i].da = 0.52 * emp_arr[i].basic_pay;
        emp_arr[i].gross_salary = emp_arr[i].basic_pay + emp_arr[i].da;
    }
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    struct Employee employees[NUM_EMPLOYEES];
    int i;

    printf("Enter details for %d employees:\n", NUM_EMPLOYEES);
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("  Enter Name: ");
        scanf("%s", employees[i].name);
        printf("  Enter Basic Pay: ");
        scanf("%f", &employees[i].basic_pay);
    }

    calculate_pay(employees, NUM_EMPLOYEES);

    printf("\n--- Monthly Pay Calculation ---\n");
    printf("Name\t\tBasic Pay\tGross Salary\n");
    printf("--------------------------------------------------\n");
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("%s\t\t%.2f\t\t%.2f\n", 
               employees[i].name, 
               employees[i].basic_pay, 
               employees[i].gross_salary);
    }

    return 0;
}
