//Reverse of a number by recursion
#include <stdio.h>
int rev=0;
int reverse(int);
int reverse(int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        rev=(rev*10)+a%10;
        reverse(a/10);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    reverse(n);
    printf("The reverse of the %d is %d\n",n,rev);
}