//Finding missing number from an array
//Assuming array to be 1 to N
#include <stdio.h>
int main()
{
    int n,i,a[100],sumog=0,sumexp=0,miss_num;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sumog+=a[i];
    }
    for(i=1;i<=n+1;i++)
    {
        sumexp+=i;
    }
    miss_num=sumexp-sumog;
    printf("The missing number is %d\n",miss_num);
    return 0;
}