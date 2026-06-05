//Check number is prime or not
#include <stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("The number is not prime.\n");
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("The number is prime.\n");
        }
        else
        {
            printf("The number is not prime.\n");
        }
    }
    return 0;
}
