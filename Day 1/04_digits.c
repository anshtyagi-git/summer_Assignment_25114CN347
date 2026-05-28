//Count digits in a number
#include <stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0)
    {
        count=1;
    }
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("No. of digits is %d\n",count);
    return 0;
}