//Function to check number is prime or not
#include <stdio.h>
void prime(int); //Function Prototype
void prime(int a) //Function Definition
{
    int i,flag=1;
    if(a==0 || a==1)
    {
        flag=0;
    }
    else
    {
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("%d is prime\n",a);
    }
    else
    {
        printf("%d is not prime\n",a);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    prime(n);
    return 0;
}