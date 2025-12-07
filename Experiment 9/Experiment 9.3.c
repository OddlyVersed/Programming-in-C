/* 9.3. Open a file, read its content line by line, and display each line on the console. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    FILE *fp;
    char *filename = "output_text.txt";
    char buffer[256];

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file %s. Ensure the file was created.\n", filename);
        return 1;
    }

    printf("Content of %s (Line by Line):\n", filename);
    
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    
    printf("\n\nSuccessfully read and closed the file.\n");

    return 0;
}
