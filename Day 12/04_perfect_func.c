//Function to check number is perfect or not
#include <stdio.h>
void perfect(int); //Function Prototype
void perfect(int a) //Function Definition
{
    int i,sum=0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    if(sum==a)
    {
        printf("%d is a perfect number.\n",a);
    }
    else
    {
        printf("%d is not a perfect number.\n",a);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    perfect(n);
    return 0;
}
