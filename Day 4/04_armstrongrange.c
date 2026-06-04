//Find Armstrong numbers in range
#include <stdio.h>
#include <math.h>
int main()
{
    int n1,n2,i,dgt,count,sum,temp,temp1,temp2;
    printf("Enter the range:");
    scanf("%d%d",&n1,&n2);
    printf("The Armstrong numbers in range %d and %d are:\n",n1,n2);
    for(i=n1;i<=n2;i++)
    {
        sum=0;
        count=0;
        temp=temp1=temp2=i;

        while(temp!=0)
        {
            temp=temp/10;
            count++;
        }
        while(temp1!=0)
        {
            dgt=temp1%10;
            sum=sum+pow(dgt,count);
            temp1=temp1/10;
        }
        if(temp2==sum)
        {
            printf("%d\n",i);
        }  
    }
    return 0;
}