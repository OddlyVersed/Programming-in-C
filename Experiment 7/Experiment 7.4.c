#include <stdio.h>
#include <string.h>

#define MAX_ADDRESS_LEN 100

union AddressComponent {
    char name[MAX_ADDRESS_LEN];
    char home_address[MAX_ADDRESS_LEN];
    char hostel_address[MAX_ADDRESS_LEN];
    char city[MAX_ADDRESS_LEN];
    char state[MAX_ADDRESS_LEN];
    char zip[MAX_ADDRESS_LEN];
};

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    union AddressComponent address;
    
    printf("Enter your present (Hostel) address in one line: ");
    scanf(" %[^\n]", address.hostel_address); 

    printf("\n--- Present Address Display ---\n");
    
    printf("Hostel Address: %s\n", address.hostel_address);
    printf("-------------------------------\n");
    
    return 0;
}
