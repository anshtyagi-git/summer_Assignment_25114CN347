//Finds the most frequent character in a string
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,count=0,maxfreq=1;
    char str[100],maxchar;
    printf("Enter the string:");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        count=0;
        for(j=0;j<strlen(str);j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count>maxfreq)
        {
            maxfreq=count;
            maxchar=str[i];
        }
        count=0;
    }
    if(maxfreq>1)
    {
        printf("The most frequent character is '%c' and is present %d times.\n",maxchar,maxfreq);
    }
    else
    {
        printf("All characters are distinct.\n");
    }
    return 0;
}