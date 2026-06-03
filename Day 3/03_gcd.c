//Find GCD of two numbers
#include <stdio.h>
int main()
{
    int x,y,rem,max,min,gcd;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
    if(x<y)
    {
        min=x;
        max=y;
    }
    else
    {
        max=x;
        min=y;
    }
    do
    {
        rem=max%min;
        if(rem==0)
        {
            gcd=min;
            break;
        }
        max=min;
        min=rem;
    }while(rem!=0);
    printf("The GCD of two numbers is %d\n",gcd);
    return 0;
}