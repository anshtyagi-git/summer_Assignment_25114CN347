//Factorial of a number
#include <stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("The factorial of %d is %d\n",n,fact);
    }
    else if(n<0)
    {
        printf("The factorial of %d is not defined.\n",n);
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("The factorial of %d is %d\n",n,fact);
    }
    return 0;
}