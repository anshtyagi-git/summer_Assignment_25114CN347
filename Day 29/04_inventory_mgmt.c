//Inventory Management System
#include <stdio.h>
struct item
{
    int id;
    char name[30];
    float price;
    int quantity;
};
int main()
{
    struct item inventory[100];
    int choice,count=0,i,id,found;
    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter Item ID:");
                scanf("%d",&inventory[count].id);
                printf("Enter Item Name:");
                scanf("%s",inventory[count].name);
                printf("Enter Item Price:");
                scanf("%f",&inventory[count].price);
                printf("Enter Item Quantity:");
                scanf("%d",&inventory[count].quantity);
                count++;
                printf("Item Added Successfully.\n");
                break;
            }
            case 2:
            {
                if(count==0)
                {
                    printf("No Items Available.\n");
                }
                else
                {
                    printf("\nID\tName\tPrice\tQuantity\n");
                    for(i=0;i<count;i++)
                    {
                        printf("%d\t%s\t%.2f\t%d\n",
                               inventory[i].id,
                               inventory[i].name,
                               inventory[i].price,
                               inventory[i].quantity);
                    }
                }
                break;
            }
            case 3:
            {
                found=0;
                printf("Enter Item ID to Search:");
                scanf("%d",&id);
                for(i=0;i<count;i++)
                {
                    if(inventory[i].id==id)
                    {
                        printf("Item Found\n");
                        printf("ID : %d\n",inventory[i].id);
                        printf("Name : %s\n",inventory[i].name);
                        printf("Price : %.2f\n",inventory[i].price);
                        printf("Quantity : %d\n",inventory[i].quantity);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Item Not Found.\n");
                }
                break;
            }
            case 4:
            {
                found=0;
                printf("Enter Item ID:");
                scanf("%d",&id);
                for(i=0;i<count;i++)
                {
                    if(inventory[i].id==id)
                    {
                        printf("Enter New Quantity:");
                        scanf("%d",&inventory[i].quantity);
                        printf("Quantity Updated Successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Item Not Found.\n");
                }
                break;
            }
            case 5:
            {
                found=0;
                printf("Enter Item ID:");
                scanf("%d",&id);
                for(i=0;i<count;i++)
                {
                    if(inventory[i].id==id)
                    {
                        int j;
                        for(j=i;j<count-1;j++)
                        {
                            inventory[j]=inventory[j+1];
                        }
                        count--;
                        printf("Item Deleted Successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Item Not Found.\n");
                }
                break;
            }
            case 6:
            {
                printf("Exiting Program...\n");
                break;
            }
            default:
            {
                printf("Invalid Choice!\n");
                break;
            }
        }
    }
    while(choice!=6);
    return 0;
}