/*Experiment 5: Variable and Scope of Variable 
5.3. Declare variables within different code blocks (enclosed by curly braces) and test their 
accessibility within and outside those blocks.*/ 
#include <stdio.h> 
int main() { 
printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
int a = 5; 
printf("a = %d\n", a);
{ 
int b = 10;
printf("Inside inner block: a = %d, b = %d\n", a, b); 
}
{ 
int c = 15; 
printf("Inside another block: a = %d, c = %d\n", a, c); 
}
return 0; 
}
