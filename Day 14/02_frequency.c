//Find frequency of element in the array
#include <stdio.h>
int main()
{
    int n,a[100],i,target,freq=0;
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
            freq++;
        }
    }
    printf("%d is present %d times in the array.\n",target,freq);
    return 0;
}