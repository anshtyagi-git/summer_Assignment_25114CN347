//Prints maximum and minimum element in an array
#include <stdio.h>
int main()
{
    int n,i,max,min,a[100];
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    scanf("%d",&a[0]); //first element
    max=min=a[0];
    for(i=1;i<n;i++) //subsequent elements
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The minimum element in array is %d\n",min);
    printf("The maximum element in array is %d\n",max);
    return 0;
}