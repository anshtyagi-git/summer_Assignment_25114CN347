//Prints the reversed array
#include <stdio.h>
int main()
{
    int n,i,a[100],temp;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The original array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<n/2;i++)
    {
        temp=a[n-i-1];
        a[n-i-1]=a[i];
        a[i]=temp;
    }
    printf("The reversed array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}