//Find duplicates in the array
#include <stdio.h>
int main()
{
    int n,a[100],i,j,flag=0;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Duplicate elements are:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d\n",a[i]);
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("No duplicates found.\n");
    }
    return 0;
}