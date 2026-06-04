//Check number is Armstrong or not
#include <stdio.h>
#include <math.h>
int main()
{
    int n,count=0,dgt,sum=0,temp,temp2;
    printf("Enter the number to check:");
    scanf("%d",&n);
    temp2=temp=n;  
    while(n!=0)
    {
        n=n/10;
        count++;
    } 
    while(temp!=0)
    {
        dgt=temp%10;
        sum=sum+pow(dgt,count);
        temp=temp/10;
    }
    if(temp2==sum)
    {
        printf("%d is an Armstrong number.\n",temp2);
    }
    else
    {
        printf("%d is not an Armstrong number.\n",temp2);
    }
    return 0;
}