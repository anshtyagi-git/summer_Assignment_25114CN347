//Removes Duplicates from an array
#include <stdio.h>
int main()
{
    int n,i,j,k=0,a[100],unique[100],duplicate=0;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        duplicate=0;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                duplicate=1;
                break;
            }
        }
        if(duplicate==0)
        {
            unique[k]=a[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d\t",unique[i]);
    }
    return 0;
}