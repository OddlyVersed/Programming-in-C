/*Experiment 3: Conditional Statements
3. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).*/
#include <stdio.h>
int main() 
{
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);
    
    bmi = weight / (height * height);
     printf("Your BMI is: %f\n", bmi);

    if (bmi < 15) {
        printf("Starvation\n");
    }
    else if (bmi >= 15.1 && bmi <= 17.5) {
        printf("Anoxeric\n");
    }
    else if (bmi >= 17.6&& bmi <= 18.5) {
        printf("You are underweight\n");
    }
    else if (bmi >= 25&& bmi <= 25.9) {
        printf("You are overweight\n");
    }
    else if (bmi >= 30  && bmi <= 39.9){
	printf("obese\n");
}
	else {
        printf("You are mordibly obese\n");
    }
    
    printf("\n--------------------------------\n");
    
    return 0;
    
}
