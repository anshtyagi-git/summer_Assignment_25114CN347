//Function to find maximum of two numbers
#include <stdio.h>
int max(int,int); //Function Prototype
int max(int x,int y) //Function Definition
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    printf("The maximum number is %d\n",max(a,b));
    return 0;
}