//Function to check number is Palindrome or not
#include <stdio.h>
void palindrome(int); //Function Prototype
void palindrome(int a) //Function Definition
{
    int dgt,rev=0,temp;
    temp=a;
    while(a!=0)
    {
        dgt=a%10;
        rev=(rev*10)+dgt;
        a=a/10;
    }
    if(temp==rev)
    {
        printf("%d is a palindrome.\n",temp);
    }
    else
    {
        printf("%d is not a palindrome.\n",temp);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}