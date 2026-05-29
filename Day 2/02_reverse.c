//Reverse of a number
#include <stdio.h>
int main()
{
    int n,rev=0,dgt;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        dgt=n%10;
        rev=(rev*10)+dgt;
        n=n/10;
    }
    printf("The reverse of the number is %d\n",rev);
    return 0;
}