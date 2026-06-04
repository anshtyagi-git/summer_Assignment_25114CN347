//Generate Fibonacci Series
#include <stdio.h>
int main()
{
    int n,i,f1=0,f2=1,f3;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("%d\n",f1);
        }
        else if(i==2)
        {
            printf("%d\n",f2);
        }
        else
        {
            f3=f1+f2;
            printf("%d\n",f3);
            f1=f2;
            f2=f3;
        }
    }
    return 0;
}