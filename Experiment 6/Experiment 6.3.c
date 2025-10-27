/*Experiment 6: Array 
6.3. WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to find the frequency of a particular number in a list of integers.*/ 
#include <stdio.h> 
int main()  
{ 
printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
int n, num, i, count = 0; 
printf("Enter number of elements: "); 
scanf("%d", &n); 
int arr[n]; 
printf("Enter %d integers:\n", n); 
for ( i = 0; i < n; i++)  
{ 
scanf("%d", &arr[i]); 
} 
printf("Enter number to find frequency: "); 
scanf("%d", &num); 
for ( i = 0; i < n; i++)  
{ 
if (arr[i] == num) 
count++; 
} 
printf("Frequency of %d = %d\n", num, count); 
return 0; 
}
