// Airport Management System using arrays & strings
#include <stdio.h>
#include <string.h>

int main()
{
    int flightno[100], seats[100];
    char source[100][50], destination[100][50];

    int n = 0, choice, i, search, found, j;

    do
    {
        printf("\n===== AIRPORT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Flight\n");
        printf("2. Display All Flights\n");
        printf("3. Search Flight\n");
        printf("4. Update Flight\n");
        printf("5. Delete Flight\n");
        printf("6. Book Ticket\n");
        printf("7. Cancel Ticket\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                if(n == 100)
                {
                    printf("Flight records are full!\n");
                }
                else
                {
                    printf("Enter Flight Number: ");
                    scanf("%d", &flightno[n]);

                    printf("Enter Source: ");
                    scanf("%s", source[n]);

                    printf("Enter Destination: ");
                    scanf("%s", destination[n]);

                    printf("Enter Total Seats: ");
                    scanf("%d", &seats[n]);

                    printf("Flight added successfully!\n");

                    n++;
                }

                break;
            }

            case 2:
            {
                if(n == 0)
                {
                    printf("No flight records found!\n");
                }
                else
                {
                    printf("\n========== FLIGHT RECORDS ==========\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("---------------------------------\n");
                        printf("Flight Number : %d\n", flightno[i]);
                        printf("Source        : %s\n", source[i]);
                        printf("Destination   : %s\n", destination[i]);
                        printf("Available Seats : %d\n", seats[i]);
                        printf("---------------------------------\n");
                    }
                }

                break;
            }

            case 3:
            {
                if(n == 0)
                {
                    printf("No flight records found!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Flight Number to Search: ");
                    scanf("%d", &search);

                    for(i = 0; i < n; i++)
                    {
                        if(flightno[i] == search)
                        {
                            printf("\nFlight Found!\n");
                            printf("Flight Number : %d\n", flightno[i]);
                            printf("Source        : %s\n", source[i]);
                            printf("Destination   : %s\n", destination[i]);
                            printf("Available Seats : %d\n", seats[i]);

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Flight not found!\n");
                    }
                }

                break;
            }

            case 4:
            {
                if(n == 0)
                {
                    printf("No flight records found!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Flight Number to Update: ");
                    scanf("%d", &search);

                    for(i = 0; i < n; i++)
                    {
                        if(flightno[i] == search)
                        {
                            printf("Enter New Source: ");
                            scanf("%s", source[i]);

                            printf("Enter New Destination: ");
                            scanf("%s", destination[i]);

                            printf("Enter New Available Seats: ");
                            scanf("%d", &seats[i]);

                            printf("Flight updated successfully!\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Flight not found!\n");
                    }
                }

                break;
            }

            case 5:
            {
                if(n == 0)
                {
                    printf("No flight records found!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Flight Number to Delete: ");
                    scanf("%d", &search);

                    for(i = 0; i < n; i++)
                    {
                        if(flightno[i] == search)
                        {
                            for(j = i; j < n - 1; j++)
                            {
                                flightno[j] = flightno[j + 1];
                                strcpy(source[j], source[j + 1]);
                                strcpy(destination[j], destination[j + 1]);
                                seats[j] = seats[j + 1];
                            }

                            n--;

                            printf("Flight deleted successfully!\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Flight not found!\n");
                    }
                }

                break;
            }

            case 6:
            {
                if(n == 0)
                {
                    printf("No flight records found!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Flight Number to Book Ticket: ");
                    scanf("%d", &search);

                    for(i = 0; i < n; i++)
                    {
                        if(flightno[i] == search)
                        {
                            found = 1;

                            if(seats[i] > 0)
                            {
                                seats[i]--;
                                printf("Ticket booked successfully!\n");
                                printf("Remaining Seats : %d\n", seats[i]);
                            }
                            else
                            {
                                printf("Sorry! No seats available.\n");
                            }

                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Flight not found!\n");
                    }
                }

                break;
            }

            case 7:
            {
                if(n == 0)
                {
                    printf("No flight records found!\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Flight Number to Cancel Ticket: ");
                    scanf("%d", &search);

                    for(i = 0; i < n; i++)
                    {
                        if(flightno[i] == search)
                        {
                            seats[i]++;

                            printf("Ticket cancelled successfully!\n");
                            printf("Available Seats : %d\n", seats[i]);

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Flight not found!\n");
                    }
                }

                break;
            }

            case 8:
            {
                printf("Thank you for using Airport Management System!\n");
                break;
            }

            default:
            {
                printf("Invalid choice!\n");
            }
        }

    }
    while(choice != 8);
    
    return 0;
}