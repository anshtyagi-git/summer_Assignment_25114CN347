//Find the largest prime factor of a number
#include <stdio.h>
int prime(int);
int prime(int a)
{
    int i,flag=0;
    if(a==0 || a==1)
    {
        return 1;
    }
    else
    {
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int n,i,large=0;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("Largest prime factor is not possible.");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                if(prime(i)==0)
                {
                    if(i>large)
                    {
                        large=i;
                    }
                }
            }
        }
        printf("The largest prime factor of %d is %d\n",n,large);
    } 
    return 0;
}