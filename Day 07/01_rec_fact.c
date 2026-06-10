//Factorial of a number by recursion
#include <stdio.h>
int fact(int);
int fact(int i)
{
    if (i==0 || i==1)
    {
        return 1;
    }
    else
    {
        return i*fact(i-1);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The factorial of %d is %d\n",n,fact(n));
    return 0;
}