//Function to print Fibonacci Series
#include <stdio.h>
int fibo(int); //Function Prototype
int fibo(int i) //Function Definition
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
    printf("The Fibonacci Series upto %dth term is:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",fibo(i));
    }
    return 0;
}