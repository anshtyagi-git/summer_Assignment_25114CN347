//Merge two sorted arrays
#include <stdio.h>
int main()
{
    int i=0,j=0,k=0,n1,n2,len,a[100],b[100],c[100];
    printf("Enter the no. of elements in first sorted array:");
    scanf("%d",&n1);
    printf("Enter the no. of elements in second sorted array:");
    scanf("%d",&n2);
    printf("Enter the elements of first sorted array:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second sorted array:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The first sorted array is:\n");
    for(i=0;i<n1;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("The second sorted array is:\n");
    for(i=0;i<n2;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\n");
    i=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    len=k;
    printf("The merged sorted array is:\n");
    for(k=0;k<len;k++)
    {
        printf("%d\t",c[k]);
    }
    return 0;
}