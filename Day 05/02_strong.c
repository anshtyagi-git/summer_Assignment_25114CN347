//Check number is Strong or not
#include <stdio.h>
int fact(int);
int fact(int i)
{
    if(i==1 || i==0)
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
    int n,dgt,sum=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        dgt=n%10;
        sum=sum+fact(dgt);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is a strong number.\n");
    }
    else
    {
        printf("%d is not a strong number.\n");
    }
    return 0;
}