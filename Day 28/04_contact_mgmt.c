//Contact Management System
#include <stdio.h>
#include <string.h>
struct contact
{
    int id;
    char name[50];
    char phone[15];
    char email[50];
};
int main()
{
    struct contact phonebook[100];
    int choice, count = 0;
    int i, j, id, found;
    do
    {
        printf("\n========== CONTACT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                if(count == 100)
                {
                    printf("Phonebook is Full!\n");
                    break;
                }
                printf("Enter Contact ID: ");
                scanf("%d", &phonebook[count].id);
                printf("Enter Name: ");
                scanf(" %[^\n]", phonebook[count].name);
                printf("Enter Phone Number: ");
                scanf("%s", phonebook[count].phone);
                printf("Enter Email Address: ");
                scanf("%s", phonebook[count].email);
                count++;
                printf("Contact Added Successfully!\n");
                break;
            }
            case 2:
            {
                if(count == 0)
                {
                    printf("No Contacts Available!\n");
                }
                else
                {
                    printf("\n========== CONTACT LIST ==========\n");
                    for(i = 0; i < count; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Contact ID   : %d\n", phonebook[i].id);
                        printf("Name         : %s\n", phonebook[i].name);
                        printf("Phone Number : %s\n", phonebook[i].phone);
                        printf("Email        : %s\n", phonebook[i].email);
                        printf("----------------------------------\n");
                    }
                }
                break;
            }
            case 3:
            {
                printf("Enter Contact ID to Search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(phonebook[i].id == id)
                    {
                        printf("\nContact Found!\n");
                        printf("Contact ID   : %d\n", phonebook[i].id);
                        printf("Name         : %s\n", phonebook[i].name);
                        printf("Phone Number : %s\n", phonebook[i].phone);
                        printf("Email        : %s\n", phonebook[i].email);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Contact Not Found!\n");
                }
                break;
            }
            case 4:
            {
                printf("Enter Contact ID to Update: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(phonebook[i].id == id)
                    {
                        printf("Enter New Name: ");
                        scanf(" %[^\n]", phonebook[i].name);
                        printf("Enter New Phone Number: ");
                        scanf("%s", phonebook[i].phone);
                        printf("Enter New Email Address: ");
                        scanf("%s", phonebook[i].email);
                        printf("Contact Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Contact Not Found!\n");
                }
                break;
            }
            case 5:
            {
                printf("Enter Contact ID to Delete: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(phonebook[i].id == id)
                    {
                        for(j = i; j < count - 1; j++)
                        {
                            phonebook[j] = phonebook[j + 1];
                        }
                        count--;
                        found = 1;
                        printf("Contact Deleted Successfully!\n");
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Contact Not Found!\n");
                }
                break;
            }
            case 6:
            {
                printf("Thank You for using the Contact Management System!\n");
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