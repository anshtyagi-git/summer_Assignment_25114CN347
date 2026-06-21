//Find the length of string without strlen()
#include <stdio.h>
int main()
{
    int i=0;
    char c,str[100];
    printf("Enter the string:");
    gets(str);//used for multi-word strings
    c=str[0];
    while(c!='\0')
    {
        i++;
        c=str[i];
    }
    printf("The length of string \"%s\" is %d\n",str,i);
    return 0;
}