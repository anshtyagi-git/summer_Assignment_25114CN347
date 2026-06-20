//Check whether matrix is symmetric or not
#include <stdio.h>
int main()
{
    int n,i,j,a[100][100],symmetric=1;
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
    printf("The matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                symmetric=0;
                break;
            }
        }
    }
    if(symmetric==1)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}