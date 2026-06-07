//Fibonacci Series by recursion
#include <stdio.h>
int fibo(int);
int fibo(int i)
{
    if(i==1)
    {
        return 0;
    }
    else if(i==2)
    {
        return 1;
    }
    else
    {
        return fibo(i-1)+fibo(i-2);
    }
}
int main()
{
    int n,i;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    printf("The Fibonacci series upto %dth term is:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",fibo(i));
    }
    return 0;
}