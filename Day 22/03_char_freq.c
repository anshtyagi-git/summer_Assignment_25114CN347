//Find the frequency of a character in a string
#include <stdio.h>
int main()
{
    char str[100],ch;
    int i,count=0;
    printf("Enter a string:");
    gets(str);
    printf("Enter the character:");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("'%c' is present %d times in %s\n",ch,count,str);
    return 0;
}