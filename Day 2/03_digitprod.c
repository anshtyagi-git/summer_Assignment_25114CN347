//Product of digits of a number
#include <stdio.h>
int main()
{
    int n,prod=1,dgt;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        dgt=n%10;
        prod=prod*dgt;
        n=n/10;
    }
    printf("The product of digits is %d\n",prod);
    return 0;
}