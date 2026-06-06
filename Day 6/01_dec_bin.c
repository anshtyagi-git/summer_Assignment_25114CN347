//Decimal to binary conversion
#include <stdio.h>
int main()
{
    int n,rem;
    long long int sum=0,place=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        sum=sum+rem*place;
        place=place*10;
    }
    printf("The binary representation of %d is %lld\n",n,sum);
    return 0;
}