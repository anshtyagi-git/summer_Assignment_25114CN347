//Finding the intersection of arrays
#include <stdio.h>
int main()
{
    int n1,n2,i,j,k=0,found=0,a[100],b[100],c[200];
    printf("Enter the no. of elements of first array:");
    scanf("%d",&n1);
    printf("Enter the no. of elements of second array:");
    scanf("%d",&n2);
    printf("Enter the elements for first array:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements for second array:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                found=1;
                break;
            }
        }
        if(found==1)
        {
            c[k]=a[i];
            k++;
        }
        found=0;
    }
    printf("The intersection of the arrays is:\n");
    for(i=0;i<k;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}