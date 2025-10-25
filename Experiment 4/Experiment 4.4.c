/*Experiment 4: Loops   
4. The population of a town is 100000. The population has increased steadily at the 
rate of  
10% per year for the last 10 years. Write a program to determine the population at the 
end of  
each year in the last decade. */  
#include<stdio.h>  
int main()  
{  
printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer 
Science\nBatch - B1"); 
printf("\n--------------------------------\n");  
int i, j=100000;  
for(i=1; i<11; i++)  
{  
j=j+(j*0.1);  
printf("Population of the town in year %d is: %d\n", i, j); 
} 
printf("\n--------------------------------\n"); 
return 0; 
}
