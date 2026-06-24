//Checks the rotation of a string
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,found=0;
    char str1[100],str2[100],str3[100];
    printf("Enter first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    if(strlen(str1)!=strlen(str2))
    {
        printf("Not Rotation.\n");
        return 0;
    }
    strcpy(str3,str1);
    strcat(str3,str1);
    puts(str3);
    for(i=0;i<=strlen(str3)-strlen(str2);i++)
    {
        for(j=0;j<strlen(str2);j++)
        {
            if(str3[i+j]!=str2[j])
            {
                break;
            }
        }
        if(j==strlen(str2))
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("Rotation.\n");
    }
    else
    {
        printf("Not Rotation.\n");
    }
    return 0;
}