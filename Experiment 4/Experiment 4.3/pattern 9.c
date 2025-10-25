#include<stdio.h>  
int main()  
{  
printf("Dibyendu Bhattacharjee\nSAP ID: 590025721\nCourse: BSc. CS. \nBatch: 1");  
printf("\n-----------------\n");  
printf("The pattern is:\n");  
int i, j, k, l;  
for(i=1; i<=5; i++)  
{  
for(k=5; k>=i; k--)  
{  
printf("  ");  
}  
for(j=5; j>=6-i; j--)  
{  
printf("%d ", j);  
}  
int m=7-i;  
for(l=1; l<i; l++)  
{  
printf("%d ", m);  
m++;  
}  
printf("\n");  
}  
for(i=4; i>=1; i--)  
{  
for(k=i; k<=5; k++)  
{  
printf("  ");  
}  
int m=5;  
for(j=1; j<=i; j++)  
{  
printf("%d ", m);  
m--;  
}  
for(l=7-i; l<=5; l++)  
{  
printf("%d ", l);  
}  
printf("\n");  
}  
return 0;  
}
