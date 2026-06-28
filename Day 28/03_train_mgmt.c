//Train Management System
#include <stdio.h>
#include <string.h>
struct ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
    float fare;
};
int main()
{
    struct ticket booking[100];
    int choice, count = 0;
    int i, j, ticketNo, found;
    do
    {
        printf("\n========== TICKET BOOKING SYSTEM ==========\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Update Ticket\n");
        printf("5. Cancel Ticket\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                if(count == 100)
                {
                    printf("Booking List is Full!\n");
                    break;
                }
                printf("Enter Ticket Number: ");
                scanf("%d", &booking[count].ticketNo);
                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", booking[count].name);
                printf("Enter Destination: ");
                scanf(" %[^\n]", booking[count].destination);
                printf("Enter Ticket Fare: ");
                scanf("%f", &booking[count].fare);
                count++;
                printf("Ticket Booked Successfully!\n");
                break;
            }
            case 2:
            {
                if(count == 0)
                {
                    printf("No Tickets Booked!\n");
                }
                else
                {
                    printf("\n========== BOOKED TICKETS ==========\n");
                    for(i = 0; i < count; i++)
                    {
                        printf("\nTicket %d\n", i + 1);
                        printf("Ticket Number : %d\n", booking[i].ticketNo);
                        printf("Passenger Name: %s\n", booking[i].name);
                        printf("Destination   : %s\n", booking[i].destination);
                        printf("Fare          : %.2f\n", booking[i].fare);
                        printf("-----------------------------------\n");
                    }
                }
                break;
            }
            case 3:
            {
                printf("Enter Ticket Number to Search: ");
                scanf("%d", &ticketNo);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(booking[i].ticketNo == ticketNo)
                    {
                        printf("\nTicket Found!\n");
                        printf("Ticket Number : %d\n", booking[i].ticketNo);
                        printf("Passenger Name: %s\n", booking[i].name);
                        printf("Destination   : %s\n", booking[i].destination);
                        printf("Fare          : %.2f\n", booking[i].fare);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Ticket Not Found!\n");
                }
                break;
            }
            case 4:
            {
                printf("Enter Ticket Number to Update: ");
                scanf("%d", &ticketNo);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(booking[i].ticketNo == ticketNo)
                    {
                        printf("Enter New Passenger Name: ");
                        scanf(" %[^\n]", booking[i].name);
                        printf("Enter New Destination: ");
                        scanf(" %[^\n]", booking[i].destination);
                        printf("Enter New Fare: ");
                        scanf("%f", &booking[i].fare);
                        printf("Ticket Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Ticket Not Found!\n");
                }
                break;
            }
            case 5:
            {
                printf("Enter Ticket Number to Cancel: ");
                scanf("%d", &ticketNo);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(booking[i].ticketNo == ticketNo)
                    {
                        for(j = i; j < count - 1; j++)
                        {
                            booking[j] = booking[j + 1];
                        }
                        count--;
                        found = 1;
                        printf("Ticket Cancelled Successfully!\n");
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Ticket Not Found!\n");
                }
                break;
            }
            case 6:
            {
                printf("Thank You for Using the Ticket Booking System!\n");
                break;
            }
            default:
            {
                printf("Invalid Choice!\n");
                break;
            }
        }
    }while(choice != 6);
    return 0;
}