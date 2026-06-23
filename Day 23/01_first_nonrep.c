//Finds the first non repeating character in a string
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,count=0,flag=0;
    char str[100];
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
        if(count==1)
        {
            printf("The first non-repeating character is '%c'\n",str[i]);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("All characters are repeating.\n");
    }
    return 0;
}