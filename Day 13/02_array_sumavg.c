//Print sum and average of array
#include <stdio.h>
int main()
{
    int n,i,sum=0,a[100];
    float avg;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=(float)sum/n;
    printf("The sum of elements is %d\n",sum);
    printf("The average of elements is %0.2f\n",avg);
    return 0;
}