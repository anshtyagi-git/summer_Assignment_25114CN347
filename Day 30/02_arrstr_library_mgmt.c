//Mini Library System
#include <stdio.h>
#include <string.h>

int main()
{
    int id[100], quantity[100];
    char title[100][50];
    char author[100][50];
    int n = 0, choice, i, search_id, found, j;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book\n");
        printf("5. Delete Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                if(n == 100)
                {
                    printf("Library is full!\n");
                }
                else
                {
                    printf("Enter Book ID: ");
                    scanf("%d", &id[n]);

                    printf("Enter Book Title: ");
                    scanf("%s", title[n]);

                    printf("Enter Author Name: ");
                    scanf("%s", author[n]);

                    printf("Enter Quantity: ");
                    scanf("%d", &quantity[n]);

                    printf("Book added successfully!\n");
                    n++;
                }
                break;
            }

            case 2:
            {
                if(n == 0)
                {
                    printf("No books available!\n");
                }
                else
                {
                    printf("\n========== BOOK RECORDS ==========\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("---------------------------------\n");
                        printf("Book ID   : %d\n", id[i]);
                        printf("Title     : %s\n", title[i]);
                        printf("Author    : %s\n", author[i]);
                        printf("Quantity  : %d\n", quantity[i]);
                        printf("---------------------------------\n");
                    }
                }
                break;
            }

            case 3:
            {
                if(n == 0)
                {
                    printf("No books available!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Book ID to Search: ");
                    scanf("%d", &search_id);

                    for(i = 0; i < n; i++)
                    {
                        if(id[i] == search_id)
                        {
                            printf("\nBook Found!\n");
                            printf("Book ID   : %d\n", id[i]);
                            printf("Title     : %s\n", title[i]);
                            printf("Author    : %s\n", author[i]);
                            printf("Quantity  : %d\n", quantity[i]);

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Book not found!\n");
                    }
                }
                break;
            }

            case 4:
            {
                if(n == 0)
                {
                    printf("No books available!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Book ID to Update: ");
                    scanf("%d", &search_id);

                    for(i = 0; i < n; i++)
                    {
                        if(id[i] == search_id)
                        {
                            printf("Enter New Title: ");
                            scanf("%s", title[i]);

                            printf("Enter New Author: ");
                            scanf("%s", author[i]);

                            printf("Enter New Quantity: ");
                            scanf("%d", &quantity[i]);

                            printf("Book updated successfully!\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Book not found!\n");
                    }
                }
                break;
            }

            case 5:
            {
                if(n == 0)
                {
                    printf("No books available!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Book ID to Delete: ");
                    scanf("%d", &search_id);

                    for(i = 0; i < n; i++)
                    {
                        if(id[i] == search_id)
                        {
                            for(j = i; j < n - 1; j++)
                            {
                                id[j] = id[j + 1];
                                strcpy(title[j], title[j + 1]);
                                strcpy(author[j], author[j + 1]);
                                quantity[j] = quantity[j + 1];
                            }

                            n--;

                            printf("Book deleted successfully!\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Book not found!\n");
                    }
                }
                break;
            }

            case 6:
            {
                printf("Thank you for using Mini Library System!\n");
                break;
            }

            default:
            {
                printf("Invalid choice!\n");
            }
        }

    }
    while(choice != 6);

    return 0;
}