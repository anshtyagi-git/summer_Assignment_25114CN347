//Palindrome of a number
#include <stdio.h>
int main()
{
    int n,rev=0,temp,dgt;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        dgt=n%10;
        rev=(rev*10)+dgt;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}