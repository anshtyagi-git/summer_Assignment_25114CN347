//Print Number Pyramid
#include <stdio.h>
int main()
{
    int i,j,r;
    printf("Enter the no.of rows:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++) //printing the spaces
        {
            printf(" ");
        }
        for(j=1;j<=i;j++) //printing from 1 to i (increment)
        {
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--) //printing from i-1 to 1 (decrement) 
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}