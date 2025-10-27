/*Experiment 5: Variable and Scope of Variable 
5.1. Declare a global variable outside all functions and use it inside various functions to 
understand its accessibility.*/ 
#include<stdio.h> 
void sprvol(double r); 
void sprsa(double r); 
void cylvol(double h, double r); 
void cylcsa(double h, double r); 
void cylsa(double h, double r); 
double pi=3.1415926535; // declaration of a global variable 
int main() 
{ 
printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
int a, r, h; 
printf("Enter\n1 for volume of sphere\n2 for surface area of sphere\n3 for volume of sphere\n4 for curved surface area of cylinder\n5 for total surface area of cylinder\n:-"); 
scanf("%d", &a); 
switch (a) 
{ 
case 1: 
printf("Enter radius:"); scanf("%d", &r); 
sprvol(r); 
break; 
case 2: 
printf("Enter radius:"); scanf("%d", &r); 
   sprsa(r); 
   break; 
  case 3: 
   printf("Enter radius and height:"); scanf("%d %d", &r, &h); 
   cylvol(h, r); 
   break; 
  case 4: 
   printf("Enter radius and height:"); scanf("%d %d", &r, &h); 
   cylcsa(h, r); 
   break; 
  case 5: 
   printf("Enter radius and height:"); scanf("%d %d", &r, &h); 
   cylsa(h, r); 
   break; 
 } 
 return 0; 
} 
void sprvol(double r) 
{ 
 double vol; 
 vol= pi*r*r*r*4/3;  
 printf("Volume of sphere is: %lf", vol); 
} 
void sprsa(double r) 
{ 
 double ar; 
ar=4*pi*r*r; 
printf("Surface area of sphere is: %lf", ar); 
} 
void cylvol(double h, double r) 
{ 
double vol; 
vol=pi*r*r*h; 
printf("Volume of cylinder is: %lf", vol); 
}
void cylcsa(double h, double r) 
{ 
double ar; 
ar=pi*r*2*h; 
printf("Curved surface area of cylinder is: %lf", ar);
}
void cylsa(double h, double r) 
{ 
double ar; 
ar=((pi*r*2*h)+2*pi*r*r); 
printf("Total surface area of cylinder is: %lf", ar);
}
