/* 9.2. Open an existing file and read its content character by character, and then close the file. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    FILE *fp;
    char *filename = "output_text.txt";
    int ch;

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file %s. Ensure the file was created in 9.1.\n", filename);
        return 1;
    }

    printf("Content of %s:\n", filename);
    
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    
    printf("\n\nSuccessfully read and closed the file.\n");

    return 0;
}
