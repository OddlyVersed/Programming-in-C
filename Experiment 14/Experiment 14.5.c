/* 6.5. Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string. */
#include <stdio.h>
#include <string.h>

void REVERSE(char *str) {
    int len = 0;
    int i = 0;
    char temp;

    while (str[len] != '\0') {
        len++;
    }

    int start = 0;
    int end = len - 1;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    char s[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", s);
    
    printf("Original string: %s\n", s);
    
    REVERSE(s);
    
    printf("Reversed string: %s\n", s);

    return 0;
}
