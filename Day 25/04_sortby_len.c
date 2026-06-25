//Sort strings by length
#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    char word[100][50],temp[50];
    printf("Enter number of words: ");
    scanf("%d",&n);
    getchar();
    printf("Enter words:\n");
    for(i=0;i<n;i++)
    {
        gets(word[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strlen(word[i])>strlen(word[j]))
            {
                strcpy(temp,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],temp);
            }
        }
    }
    printf("\nWords sorted by length:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",word[i]);
    }
    return 0;
}