//Student Record System using arrays & strings
#include <stdio.h>
#include <string.h>

int main()
{
    int roll[100], marks[100];
    char name[100][50];
    int n = 0, choice, i, roll_search, found, j;

    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                if(n == 100)
                {
                    printf("Record list is full!\n");
                }
                else
                {
                    printf("Enter Roll Number: ");
                    scanf("%d", &roll[n]);

                    printf("Enter Name: ");
                    scanf("%s", name[n]);

                    printf("Enter Marks: ");
                    scanf("%d", &marks[n]);

                    printf("Record added successfully!\n");
                    n++;
                }
                break;
            }

            case 2:
            {
                if(n == 0)
                {
                    printf("No record found!\n");
                }
                else
                {
                    printf("\n========== STUDENT RECORDS ==========\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("---------------------------------\n");
                        printf("Roll No : %d\n", roll[i]);
                        printf("Name    : %s\n", name[i]);
                        printf("Marks   : %d\n", marks[i]);
                        printf("---------------------------------\n");
                    }
                }
                break;
            }

            case 3:
            {
                if(n == 0)
                {
                    printf("No record found!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Roll Number to Search: ");
                    scanf("%d", &roll_search);

                    for(i = 0; i < n; i++)
                    {
                        if(roll[i] == roll_search)
                        {
                            printf("\nRecord Found!\n");
                            printf("Roll No : %d\n", roll[i]);
                            printf("Name    : %s\n", name[i]);
                            printf("Marks   : %d\n", marks[i]);

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Student not found!\n");
                    }
                }
                break;
            }

            case 4:
            {
                if(n == 0)
                {
                    printf("No record found!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Roll Number to Update: ");
                    scanf("%d", &roll_search);

                    for(i = 0; i < n; i++)
                    {
                        if(roll[i] == roll_search)
                        {
                            printf("Enter New Name: ");
                            scanf("%s", name[i]);

                            printf("Enter New Marks: ");
                            scanf("%d", &marks[i]);

                            printf("Record updated successfully!\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Student not found!\n");
                    }
                }
                break;
            }

            case 5:
            {
                if(n == 0)
                {
                    printf("No record found!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Roll Number to Delete: ");
                    scanf("%d", &roll_search);

                    for(i = 0; i < n; i++)
                    {
                        if(roll[i] == roll_search)
                        {
                            for(j = i; j < n - 1; j++)
                            {
                                roll[j] = roll[j + 1];
                                strcpy(name[j], name[j + 1]);
                                marks[j] = marks[j + 1];
                            }

                            n--;

                            printf("Record deleted successfully!\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Student not found!\n");
                    }
                }
                break;
            }

            case 6:
            {
                printf("Thank you for using Student Record System!\n");
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