//Find nth fibonacci term
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
    int n;
    printf("Enter the nth term:");
    scanf("%d",&n);
    printf("The %dth term in Fibonacci series is %d\n",n,fibo(n));   
    return 0;
}