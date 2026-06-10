//Print Star Pyramid
#include <stdio.h>
int main()
{
    int i,j,r;
    printf("Enter the no. of rows:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++) //printing the spaces
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++) //printing the stars
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}