/* 9.1. Write a program to create a new file and write text into it. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    FILE *fp;
    char *filename = "output_text.txt";
    char *text_to_write = "This is the first line written to the file.\nThis is the second line.";

    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Error: Could not open/create file %s.\n", filename);
        return 1;
    }

    fprintf(fp, "%s", text_to_write);

    fclose(fp);

    printf("Successfully wrote text to %s.\n", filename);

    return 0;
}
