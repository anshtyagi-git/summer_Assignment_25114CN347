//Checks if two strings are anagrams or not
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100],temp;
    int i,j;
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    if(strlen(str1)!=strlen(str2))
    {
        printf("The strings are not anagrams.\n");
        return 0;
    }
    for(i=0;i<strlen(str1)-1;i++)
    {
        for(j=i+1;j<strlen(str1);j++)
        {
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
            if(str2[i]>str2[j])
            {
                temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }
    if(strcmp(str1,str2)==0)
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}