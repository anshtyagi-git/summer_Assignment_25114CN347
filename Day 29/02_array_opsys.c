//Menu-driven Array Operations System
#include <stdio.h>
int main()
{
    int arr[100],n=0,choice,i,key,found,max,min,sum;
    float avg;
    do
    {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Maximum Element\n");
        printf("5. Find Minimum Element\n");
        printf("6. Find Sum of Elements\n");
        printf("7. Find Average\n");
        printf("8. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter the number of elements:");
                scanf("%d",&n);
                printf("Enter %d elements:\n",n);
                for(i=0;i<n;i++)
                {
                    scanf("%d",&arr[i]);
                }
                break;
            }
            case 2:
            {
                if(n==0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    printf("Array Elements are:\n");
                    for(i=0;i<n;i++)
                    {
                        printf("%d ",arr[i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3:
            {
                if(n==0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    found=0;
                    printf("Enter element to search:");
                    scanf("%d",&key);
                    for(i=0;i<n;i++)
                    {
                        if(arr[i]==key)
                        {
                            printf("Element found at position %d\n",i+1);
                            found=1;
                            break;
                        }
                    }
                    if(found==0)
                    {
                        printf("Element not found.\n");
                    }
                }
                break;
            }
            case 4:
            {
                if(n==0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    max=arr[0];
                    for(i=1;i<n;i++)
                    {
                        if(arr[i]>max)
                        {
                            max=arr[i];
                        }
                    }
                    printf("Maximum Element = %d\n",max);
                }
                break;
            }
            case 5:
            {
                if (n==0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    min=arr[0];
                    for(i=1;i<n;i++)
                    {
                        if(arr[i]<min)
                        {
                            min=arr[i];
                        }
                    }
                    printf("Minimum Element = %d\n",min);
                }
                break;
            }
            case 6:
            {
                if(n==0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    sum=0;
                    for(i=0;i<n;i++)
                    {
                        sum=sum+arr[i];
                    }
                    printf("Sum = %d\n",sum);
                }
                break;
            }
            case 7:
            {
                if(n==0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    sum=0;
                    for (i=0;i<n;i++)
                    {
                        sum=sum+arr[i];
                    }
                    avg=(float)sum/n;
                    printf("Average = %0.2f\n",avg);
                }
                break;
            }
            case 8:
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
    }while(choice!=8);
    return 0;
}