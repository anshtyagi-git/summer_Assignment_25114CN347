//Library Management System
#include <stdio.h>
#include <string.h>
struct book
{
    int id;
    char name[50];
    char author[50];
    float price;
    int quantity;
};
int main()
{
    struct book library[100];
    int choice, count = 0;
    int i, j, id, found;
    do
    {
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                if(count == 100)
                {
                    printf("Library is Full!\n");
                    break;
                }
                printf("Enter Book ID: ");
                scanf("%d", &library[count].id);
                printf("Enter Book Name: ");
                scanf(" %[^\n]", library[count].name);
                printf("Enter Author Name: ");
                scanf(" %[^\n]", library[count].author);
                printf("Enter Book Price: ");
                scanf("%f", &library[count].price);
                printf("Enter Book Quantity: ");
                scanf("%d", &library[count].quantity);
                count++;
                printf("Book Added Successfully!\n");
                break;
            }
            case 2:
            {
                if(count == 0)
                {
                    printf("No Books Available!\n");
                }
                else
                {
                    printf("\n========== BOOK LIST ==========\n");
                    for(i = 0; i < count; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID       : %d\n", library[i].id);
                        printf("Book Name     : %s\n", library[i].name);
                        printf("Author Name   : %s\n", library[i].author);
                        printf("Book Price    : %.2f\n", library[i].price);
                        printf("Quantity      : %d\n", library[i].quantity);
                        printf("------------------------------\n");
                    }
                }
                break;
            }
            case 3:
            {
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(library[i].id == id)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID       : %d\n", library[i].id);
                        printf("Book Name     : %s\n", library[i].name);
                        printf("Author Name   : %s\n", library[i].author);
                        printf("Book Price    : %.2f\n", library[i].price);
                        printf("Quantity      : %d\n", library[i].quantity);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Book Not Found!\n");
                }
                break;
            }
            case 4:
            {
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(library[i].id == id)
                    {
                        found = 1;
                        if(library[i].quantity > 0)
                        {
                            library[i].quantity--;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book Out of Stock!\n");
                        }
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Book Not Found!\n");
                }
                break;
            }
            case 5:
            {
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(library[i].id == id)
                    {
                        library[i].quantity++;
                        printf("Book Returned Successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Book Not Found!\n");
                }
                break;
            }
            case 6:
            {
                printf("Enter Book ID to Delete: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(library[i].id == id)
                    {
                        for(j = i; j < count - 1; j++)
                        {
                            library[j] = library[j + 1];
                        }
                        count--;
                        found = 1;
                        printf("Book Deleted Successfully!\n");
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Book Not Found!\n");
                }
                break;
            }
            case 7:
            {
                printf("Thank You for using the Library Management System!\n");
                break;
            }
            default:
            {
                printf("Invalid Choice!\n");
                break;
            }
        }
    }while(choice != 7);
    return 0;
}