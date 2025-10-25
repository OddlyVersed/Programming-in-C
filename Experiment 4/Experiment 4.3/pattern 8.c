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
for(j=1; j<=i; j++)  
{  
printf("%d ", j);  
}  
int m=i-1;  
for(l=1; l<=i; l++)  
{  
if(m==0)  
printf(" ");  
else  
printf("%d ", m);  
m--;  
}  
printf("\n");  
}  
for(i=4; i>=1; i--)  
{  
for(k=i; k<=5; k++)  
{  
printf("  ");  
}  
for(j=1; j<=i; j++)  
{  
printf("%d ", j);  
}  
for(l=i-1; l>=1; l--)  
{  
printf("%d ", l);  
}  
printf("\n");  
}  
 return 0;  
}
