//Find prime numbers in range
#include <stdio.h>
int main()
{
    int n1,n2,i,j,temp,flag=0;
    printf("Enter the range:");
    scanf("%d%d",&n1,&n2);
    printf("The prime numbers are:\n");
    for(i=n1;i<=n2;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            temp=i;
            if(temp%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\n",i);
        }
    }   
    return 0;
}