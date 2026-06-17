//Merging two arrays
#include <stdio.h>
int main()
{
    int n1,n2,i,a[100],b[100],c[200];
    printf("Enter the no. of elements of first array:");
    scanf("%d",&n1);
    printf("Enter the no. of elements of second array:");
    scanf("%d",&n2);
    printf("Enter the elements for first array:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements for second array\n:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(i=n1;i<n1+n2;i++)
    {
        c[i]=b[i-n1];
    }
    printf("The merged array is:\n");
    for(i=0;i<(n1+n2);i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}