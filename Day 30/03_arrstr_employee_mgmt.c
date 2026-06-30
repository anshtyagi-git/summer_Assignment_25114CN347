//Mini Employee Management System
#include <stdio.h>
#include <string.h>

int main()
{
    int empid[100], salary[100];
    char name[100][50];
    char department[100][50];
    int n = 0, choice, i, search_id, found, j;

    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                if(n == 100)
                {
                    printf("Employee list is full!\n");
                }
                else
                {
                    printf("Enter Employee ID: ");
                    scanf("%d", &empid[n]);

                    printf("Enter Employee Name: ");
                    scanf("%s", name[n]);

                    printf("Enter Department: ");
                    scanf("%s", department[n]);

                    printf("Enter Salary: ");
                    scanf("%d", &salary[n]);

                    printf("Employee added successfully!\n");
                    n++;
                }
                break;
            }

            case 2:
            {
                if(n == 0)
                {
                    printf("No employee records found!\n");
                }
                else
                {
                    printf("\n========== EMPLOYEE RECORDS ==========\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("---------------------------------\n");
                        printf("Employee ID : %d\n", empid[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Department  : %s\n", department[i]);
                        printf("Salary      : %d\n", salary[i]);
                        printf("---------------------------------\n");
                    }
                }
                break;
            }

            case 3:
            {
                if(n == 0)
                {
                    printf("No employee records found!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Employee ID to Search: ");
                    scanf("%d", &search_id);

                    for(i = 0; i < n; i++)
                    {
                        if(empid[i] == search_id)
                        {
                            printf("\nEmployee Found!\n");
                            printf("Employee ID : %d\n", empid[i]);
                            printf("Name        : %s\n", name[i]);
                            printf("Department  : %s\n", department[i]);
                            printf("Salary      : %d\n", salary[i]);

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Employee not found!\n");
                    }
                }
                break;
            }

            case 4:
            {
                if(n == 0)
                {
                    printf("No employee records found!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Employee ID to Update: ");
                    scanf("%d", &search_id);

                    for(i = 0; i < n; i++)
                    {
                        if(empid[i] == search_id)
                        {
                            printf("Enter New Name: ");
                            scanf("%s", name[i]);

                            printf("Enter New Department: ");
                            scanf("%s", department[i]);

                            printf("Enter New Salary: ");
                            scanf("%d", &salary[i]);

                            printf("Employee record updated successfully!\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Employee not found!\n");
                    }
                }
                break;
            }

            case 5:
            {
                if(n == 0)
                {
                    printf("No employee records found!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Employee ID to Delete: ");
                    scanf("%d", &search_id);

                    for(i = 0; i < n; i++)
                    {
                        if(empid[i] == search_id)
                        {
                            for(j = i; j < n - 1; j++)
                            {
                                empid[j] = empid[j + 1];
                                strcpy(name[j], name[j + 1]);
                                strcpy(department[j], department[j + 1]);
                                salary[j] = salary[j + 1];
                            }

                            n--;

                            printf("Employee record deleted successfully!\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Employee not found!\n");
                    }
                }
                break;
            }

            case 6:
            {
                printf("Thank you for using Employee Management System!\n");
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