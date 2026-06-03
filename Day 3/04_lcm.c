//Find LCM of two numbers
#include <stdio.h>
int gcd(int,int);
int gcd(int a, int b)
{
    int max,min,rem,gcd;
    if(a<b)
    {
        min=a;
        max=b;
    }
    else
    {
        min=b;
        max=a;
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
    printf("%d",gcd);
    return gcd;  
}
int main()
{
    int x,y,lcm;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
    lcm=(x*y)/gcd(x,y);
    printf("The LCM of two numbers is %d\n",lcm);
    return 0;
}