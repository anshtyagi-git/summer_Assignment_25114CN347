//Sum of diagonals of a matrix
#include <stdio.h>
int main()
{
    int i,j,n,a[100][100],lsum=0,rsum=0;
    printf("Enter the order of matrix:");
    scanf("%d",&n);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                lsum=lsum+a[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)==(n-1))
            {
                rsum=rsum+a[i][j];
            }
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The sum of left diagonal is %d\n",lsum);
    printf("The sum of right diagonal is %d\n",rsum);
    return 0;
}