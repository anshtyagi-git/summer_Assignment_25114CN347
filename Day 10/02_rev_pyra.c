//Print Reverse Star Pyramid
#include <stdio.h>
int main()
{
    int i,j,r;
    printf("Enter the no. of rows:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i-1;j++) //printng the spaces
        {
            printf(" ");
        }
        for(j=1;j<=2*(r-i)+1;j++) //printing the stars
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}