/*Experiment 5: Variable and Scope of Variable 
5.4. Declare a static local variable inside a function. Observe how its value persists across 
function calls.*/ 
#include <stdio.h> 
void counterFunction() { 
static int count = 0;
count++; 
printf("Function called %d times\n", count); 
} 
int main() { 
printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
counterFunction(); 
counterFunction(); 
counterFunction(); 
return 0; 
}

