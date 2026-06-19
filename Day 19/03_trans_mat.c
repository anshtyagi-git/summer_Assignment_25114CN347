//Transpose of a matrix
#include <stdio.h>
int main()
{
    int i,j,n1,n2,a[100][100];
    printf("Enter the order of matrices:");
    scanf("%d %d",&n1,&n2);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Original matrix is:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transposed matrix is:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}