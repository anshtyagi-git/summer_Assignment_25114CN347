//Finding an element in array using Linear Search
#include <stdio.h>
int main()
{
    int n,a[100],target,i,flag=0;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            flag=1;
            printf("%d is located at position %d in array.\n",target,i+1);
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is not present in the array.\n",target);
    }
    return 0;