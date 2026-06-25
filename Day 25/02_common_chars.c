//Find common characters in two strings
#include <stdio.h>
int main()
{
    int i, j, k;
    char str1[100],str2[100];
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    printf("Common characters are:\n");
    for(i=0;str1[i]!='\0';i++)
    {
        for(k=0;k<i;k++)
        {
            if(str1[i]==str1[k])
            {
                break;
            }
        }
        if(k==i)
        {
            for(j=0;str2[j]!='\0';j++)
            {
                if(str1[i]==str2[j])
                {
                    printf("%c ",str1[i]);
                    break;
                }
            }
        }
    }
    return 0;
}