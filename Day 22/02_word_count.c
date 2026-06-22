//Counts the words in a sentence 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("Enter a sentence:");
    gets(str); //used for entering a sentence (multi-word string)
    for(i=0;str[i]!='\0';i++)
    {
        if((i==0 && str[i]!=' ') || (str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0'))
        {
            count++;
        }
    }
    printf("Number of words = %d\n",count);
    return 0;
}