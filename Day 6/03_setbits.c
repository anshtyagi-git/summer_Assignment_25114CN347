//Count setbits in a number
#include <stdio.h>
int main()
{
    int n,bit,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        bit=n%2;
        n=n/2;
        if(bit==1)
        {
            count++;
        }
    }
    printf("The no. of setbits are %d\n",count);
    return 0;
}