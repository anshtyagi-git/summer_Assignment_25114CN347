//Count even and odd elements in an array
#include <stdio.h>
int main()
{
    int n,i,odd=0,even=0,a[100];
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The no. of odd elements in array is %d\n",odd);
    printf("The no. of even elements in array is %d\n",even);
    return 0;
}
