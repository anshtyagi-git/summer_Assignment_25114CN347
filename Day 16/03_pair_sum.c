//Finding the pair with given sum in an array
#include <stdio.h>
int main()
{
    int n,i,j,a[100],sum;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the sum:");
    scanf("%d",&sum);
    printf("The pairs with sum %d are:",sum);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(i!=j)
            {
                if(sum==a[i]+a[j])
                {
                    printf("(%d,%d)",a[i],a[j]);
                }
            }
        }
    }
    printf("\n");
    return 0;
}