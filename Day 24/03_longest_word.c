//Finds the longest word in a sentence
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],longest[100];
    int i,len=0,maxlen=0,start=0,maxstart=0;
    printf("Enter a sentence:");
    gets(str);
    for(i=0;;i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            len++;
        }
        else
        {
            if(len>maxlen)
            {
                maxlen=len;
                maxstart=start;
            }
            len=0;
            start=i+1;
        }
        if(str[i]=='\0')
        {
            break;
        }
    }
    strncpy(longest,str+maxstart,maxlen);
    longest[maxlen]='\0';
    printf("Longest word:%s\n",longest);
    printf("Length:%d", maxlen);
    return 0;
}