#include <stdio.h>

struct Book {
    int book_id;
    char title[100];
    char author[50];
    float price;
};

void print_book_details(struct Book b) {
    printf("\n--- Book Details ---\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
    printf("--------------------\n");
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    struct Book my_book;
    
    printf("Enter Book ID: ");
    scanf("%d", &my_book.book_id);
    
    printf("Enter Title: ");
    scanf(" %[^\n]", my_book.title);
    
    printf("Enter Author Name: ");
    scanf(" %[^\n]", my_book.author);
    
    printf("Enter Price: ");
    scanf("%f", &my_book.price);
    
    print_book_details(my_book);

    return 0;
}
