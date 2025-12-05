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

    union AddressComponent present_addr;
    
    printf("Enter your present (Hostel) address: ");
    scanf(" %[^\n]", present_addr.hostel_address); 

    printf("\n--- Present Address (Hostel) ---\n");
    printf("Address stored: %s\n", present_addr.hostel_address);
    printf("--------------------------------\n");
    
    // Demonstrate Union concept: Only one member holds valid data at a time.
    // printf("Name stored now: %s\n", present_addr.name); 

    return 0;
}
