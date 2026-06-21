//Reverse the string
#include <stdio.h>
#include <string.h>
int main()
{
    int i,len;
    char str[100];
    printf("Enter the string:");
    gets(str);
    len=strlen(str);
    printf("Reversed string:");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}