//Finding an element in array using Binary Search
#include <stdio.h>
int main()
{
    int n,i,a[100],target;
    int low,high,mid,found=0;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements in sorted order:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&target);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==target)
        {
            found=1;
            printf("%d is located at position %d in array.\n",target,mid+1);
            break;
        }
        else if(target<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(found==0)
    {
        printf("%d is not present in the array.\n",target);
    }
    return 0;
}