//Binary to decimal conversion
#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,temp;
    int bit,sum=0,i=0;
    printf("Enter the number:");
    scanf("%lld",&n);
    temp=n;
    while(n!=0)
    {
        bit=n%10;
        sum=sum+bit*pow(2,i);
        n=n/10;
        i++;
    }
    printf("The decimal representation of %lld is %d\n",temp,sum);
    return 0;
}