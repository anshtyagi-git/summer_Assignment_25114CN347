//Function to find sum of two numbers
#include <stdio.h>
int sum(int,int); //Function Prototype
int sum(int x,int y) //Function Definition
{
    return x+y;
}
int main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    printf("The sum of %d and %d is %d\n",a,b,sum(a,b));
    return 0;
}