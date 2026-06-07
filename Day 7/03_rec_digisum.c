//Sum of digits of a number by recursion
#include <stdio.h>
int digisum(int);
int digisum(int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        return (a%10)+digisum(a/10);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The sum of digits of %d is %d\n",n,digisum(n));
    return 0;
}