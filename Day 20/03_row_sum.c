//Finding Row-wise sum of a matrix
#include <stdio.h>
int main()
{
    int r,c,i,j,a[100][100],sum=0;
    printf("Enter number of rows and columns:");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Row sums are:\n");
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum+=a[i][j];
        }
        printf("Sum of row %d = %d\n",i+1,sum);
    }
    return 0;
}