//Multiplications of two matrices
#include <stdio.h>
int main()
{int i,j,k,r1,c1,r2,c2,sum=0;
    printf("Enter the rows and columns of first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the rows and columns of second matrix:");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Multiplication is not possible.\n");
    }
    else
    { int a[r1][c1],b[r2][c2],c[r1][c2];
        printf("Enter the elements of first matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of second matrix:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("The first matrix is:\n");
        for(i=0;i<r1;i++)
        {   
            for(j=0;j<c1;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("The second matrix is:\n");
        for(i=0;i<r2;i++)
        {   
            for(j=0;j<c2;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                sum=0;
            }
        }
        printf("Resultant matrix is:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}