/*Experiment 5: Variable and Scope of Variable 
5.2. Declare a local variable inside a function and try to access it outside the function. 
Compare this with accessing the global variable from within the function.*/ 
#include <stdio.h> 

int globalVar = 10; 
void testFunction() { 
int localVar = 20;  
printf("Inside function:\n"); 
printf("Local variable = %d\n", localVar); 
printf("Global variable = %d\n", globalVar); 
} 
int main()
 { 
printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
testFunction(); 
printf("\nOutside function:\n"); 
printf("Global variable = %d\n", globalVar); 
return 0; 
}
