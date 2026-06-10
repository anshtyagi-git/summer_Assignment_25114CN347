//Sum of digits of a number
#include <stdio.h>
int main()
{
    int n,sum=0,dgt;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        dgt=n%10;
        sum=sum+dgt;
        n=n/10;
    }
    printf("The sum of digits is %d\n",sum);
    return 0;
}