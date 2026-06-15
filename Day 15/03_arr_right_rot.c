//Rotate the array to the right
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
    temp=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    printf("The right rotated array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    } 
    return 0;
}