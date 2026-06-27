//Salary Management System
#include <stdio.h>
struct salary
{
    int empid;
    char name[50];
    float basicsalary;
    float bonus;
    float totalsalary;
};
int main()
{
    struct salary s[100];
    int n=0;
    int choice,i,id,found,j;
    do
    {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Salary Record\n");
        printf("2. Display All Salary Records\n");
        printf("3. Search Salary Record\n");
        printf("4. Update Salary Record\n");
        printf("5. Delete Salary Record\n");
        printf("6. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID:");
                scanf("%d",&s[n].empid);
                printf("Enter Employee Name:");
                scanf(" %s",s[n].name);
                printf("Enter Basic Salary:");
                scanf("%f",&s[n].basicsalary);
                printf("Enter Bonus:");
                scanf("%f",&s[n].bonus);
                s[n].totalsalary=s[n].basicsalary+s[n].bonus;
                n++;
                printf("Salary record added successfully.\n");
                break;
            case 2:
                if(n==0)
                {
                    printf("No salary records available.\n");
                }
                else
                {
                    printf("\n===== Salary Records =====\n");
                    for(i=0;i<n;i++)
                    {
                        printf("\nEmployee ID   : %d",s[i].empid);
                        printf("\nName          : %s",s[i].name);
                        printf("\nBasic Salary  : %.2f",s[i].basicsalary);
                        printf("\nBonus         : %.2f",s[i].bonus);
                        printf("\nTotal Salary  : %.2f",s[i].totalsalary);
                        printf("\n------------------------------\n");
                    }
                }
                break;
            case 3:
                printf("Enter Employee ID to Search:");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(s[i].empid==id)
                    {
                        printf("\nEmployee ID   : %d",s[i].empid);
                        printf("\nName          : %s",s[i].name);
                        printf("\nBasic Salary  : %.2f",s[i].basicsalary);
                        printf("\nBonus         : %.2f",s[i].bonus);
                        printf("\nTotal Salary  : %.2f",s[i].totalsalary);
                        printf("\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Salary record not found.\n");
                }
                break;
            case 4:
                printf("Enter Employee ID to Update:");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(s[i].empid==id)
                    {
                        printf("Enter New Name:");
                        scanf("%s",s[i].name);
                        printf("Enter New Basic Salary:");
                        scanf("%f", &s[i].basicsalary);
                        printf("Enter New Bonus:");
                        scanf("%f", &s[i].bonus);
                        s[i].totalsalary=s[i].basicsalary+s[i].bonus;
                        printf("Salary record updated successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Salary record not found.\n");
                }
                break;
            case 5:
                printf("Enter Employee ID to Delete:");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(s[i].empid==id)
                    {
                        for(j=i;j<n-1;j++)
                        {
                            s[j]=s[j+1];
                        }
                        n--;
                        printf("Salary record deleted successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Salary record not found.\n");
                }
                break;
            case 6:
                printf("Thank you for using Salary Management System!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice!=6);
    return 0;
}