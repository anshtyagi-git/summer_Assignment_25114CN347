//Sorting array in descending order
#include <stdio.h>
int main()
{
    int n,i,j,a[100],temp,maxindex;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        maxindex=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[maxindex])
            {
                maxindex=j;
            }
        }
        temp=a[i];
        a[i]=a[maxindex];
        a[maxindex]=temp;
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}