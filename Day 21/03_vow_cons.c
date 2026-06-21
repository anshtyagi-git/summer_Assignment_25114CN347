//Count vowels and consonants in a string
#include <stdio.h>
int main()
{
    char str[100];
    int i,vow=0,cons=0;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                vow++;
            }
            else
            {
                cons++;
            }
        }
    }
    printf("Number of vowels = %d\n",vow);
    printf("Number of consonants = %d\n",cons);
    return 0;
}