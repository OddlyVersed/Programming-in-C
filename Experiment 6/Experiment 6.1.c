/*Experiment 6: Array 
6.1. WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to print the second largest integer in a list of integers.*/ 
#include<stdio.h> 
int main() 
{ 
printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
 int n, i;  
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
    int arr[n];   
    printf("Enter %d elements:\n", n); 
    for ( i = 0; i < n; i++)  
 { 
        scanf("%d", &arr[i]);   
    } 
     int largest = arr[0], second; 
 
    for (i = 1; i < n; i++)  
 { 
        if (arr[i] > largest) 
   { 
            second = largest; 
            largest = arr[i]; 
        }  
else if (arr[i] > second && arr[i] != largest)  
{ 
second = arr[i]; 
} 
} 
if (n < 2) 
printf("Second largest doesn't exist.\n"); 
else 
printf("Second largest number = %d\n", second);
return 0; 
}
