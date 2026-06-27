//Employee Managment System
#include <stdio.h>
struct employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct employee emp[100];
    int n=0;
    int choice,i,id,found,j;
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
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID:");
                scanf("%d",&emp[n].id);
                printf("Enter Employee Name:");
                scanf(" %s",emp[n].name);
                printf("Enter Employee Salary:");
                scanf("%f",&emp[n].salary);
                n++;
                printf("Employee record added successfully.\n");
                break;
            case 2:
                if(n==0)
                {
                    printf("No employee records available.\n");
                }
                else
                {
                    printf("\n===== Employee Records =====\n");
                    for(i=0;i<n;i++)
                    {
                        printf("\nEmployee %d\n",i+1);
                        printf("ID     : %d\n",emp[i].id);
                        printf("Name   : %s\n",emp[i].name);
                        printf("Salary : %0.2f\n",emp[i].salary);
                    }
                }
                break;
            case 3:
                printf("Enter Employee ID to Search:");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(emp[i].id==id)
                    {
                        printf("\nEmployee Found\n");
                        printf("ID     : %d\n",emp[i].id);
                        printf("Name   : %s\n",emp[i].name);
                        printf("Salary : %.2f\n",emp[i].salary);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Employee not found.\n");
                }
                break;
            case 4:
                printf("Enter Employee ID to Update:");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(emp[i].id==id)
                    {
                        printf("Enter New Name:");
                        scanf(" %s", emp[i].name);
                        printf("Enter New Salary:");
                        scanf("%f",&emp[i].salary);
                        printf("Employee record updated successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Employee not found.\n");
                }
                break;
            case 5:
                printf("Enter Employee ID to Delete:");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(emp[i].id==id)
                    {
                        for(j=i;j<n-1;j++)
                        {
                            emp[j]=emp[j+1];
                        }
                        n--;
                        found=1;
                        printf("Employee record deleted successfully.\n");
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Employee not found.\n");
                }
                break;
            case 6:
                printf("Thank you for using Employee Management System.\n");
                break;
            default:
                printf("Invalid Choice! Please try again.\n");
        }
    } while(choice != 6);
    return 0;
}