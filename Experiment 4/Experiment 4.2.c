/*Experiment 4: Loops 
2. WAP to print the multiplication table of the number entered by the user. It should be 
in the correct formatting.   Num * 1 = Num */ 
#include<stdio.h> 
int main() 
{ 
printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
int m; 
printf("Enter the number whose multiplication table you want:"); scanf("%d", 
&m); 
int i=1; 
for(i==1; i<=10; i++) 
{ 
int n= m*i; 
printf("%d x %d = %d\n", m, i,n); 
} 
printf("\n--------------------------------\n");
return 0; 
} 
