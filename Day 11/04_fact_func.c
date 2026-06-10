//Function to find the factorial of number
#include <stdio.h>
int fact(int); //Function Prototype
int fact(int a) //Function Definition
{
    int i,fact=1;
    if(a==0)
    {
        return 1;
    }
    else
    {
        for(i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        return fact;
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