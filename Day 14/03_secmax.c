//Find the second largest element in the array
#include <stdio.h>
int main()
{
    int n,a[100],i,max,secmax,flag=0;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Please enter atleast 2 elements!");
        return 0;
    }
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            secmax=max;
            max=a[i];
            flag=1;
        }
        else if(flag==1 && a[i]>secmax && a[i]<max)
        {
            secmax=a[i];
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("There is no second largest element in array.\n");
    }
    else
    {
        printf("%d is the second largest element in the array.\n",secmax);
    }
    return 0;
}