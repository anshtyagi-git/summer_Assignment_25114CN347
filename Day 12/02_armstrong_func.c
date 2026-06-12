//Function to check number is Armstrong or not
#include <stdio.h>
#include <math.h>
void armstrong(int); //Function Prototype
void armstrong(int a) //Function Definition
{
    int dgt,count=0,sum=0,temp1,temp2;
    temp1=temp2=a;
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    while(temp1!=0)
    {
        dgt=temp1%10;
        sum=sum+pow(dgt,count);
        temp1=temp1/10;
    }
    if(sum==temp2)
    {
        printf("%d is an Armstrong number.\n",temp2);
    }
    else
    {
        printf("%d is not an Armstrong number.\n",temp2);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}