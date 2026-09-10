#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char *name;
    float price;
    int pages;
    char *language;
    float weight;
    int year;
};
struct Node
{
    struct Book book;
    struct Node* next;  
};

struct Node* add_book(struct Book book)
{
struct Node* ptr = malloc(sizeof(struct Node));

    ptr->book = book;
    ptr->next = NULL;

return ptr;
}

void print_list(struct Node *head)
{
struct Node *current = head; 

    while(current != NULL)
    {
    struct Book current_book = current->book;
    printf("%s\n", current_book.name);
    printf("%f\n", current_book.price);
    printf("%d\n", current_book.pages);
    printf("%s\n", current_book.language);
    printf("%f\n", current_book.weight);
    printf("%d\n", current_book.year);

    current = current->next;
    }
}

void free_list(struct Node *head)
{
    struct Node *current = head; 

    while(current != NULL)
    {
    struct Node *last_current = current;
    current = current->next;
    free(last_current);
    }
}

int main()
{

    struct Node *head = NULL;

    struct Book first_book = {"Harry Potter", 54, 345, "English", 1482, 1986};
    struct Book second_book = {"Harry Potter 2!", 23, 123, "Ukrainian", 1234, 2001};
    head = add_book(first_book);
    head->next = add_book(second_book);

    print_list(head);
    free_list(head);
    return 0;
}