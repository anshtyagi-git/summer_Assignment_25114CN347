//Perform x^n without pow()
#include <stdio.h>
int main()
{
    int x,n,result=1,i;
    printf("Enter the base 'x':");
    scanf("%d",&x);
    printf("Enter the power 'n':");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result=result*x;
    }
    printf("%d^%d is %d\n",x,n,result);
}