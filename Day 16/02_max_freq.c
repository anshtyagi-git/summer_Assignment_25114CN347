//Maximum frequency of an element in an array
#include <stdio.h>
int main()
{
    int n,i,j,a[100],maxelem,maxfreq=1,count=0;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    maxelem=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>maxfreq)
        {
            maxfreq=count;
            maxelem=a[i];
        }
        count=0;
    }
    if(maxfreq>1)
    {
        printf("The most frequent element is %d and is present %d times.\n",maxelem,maxfreq);
    }
    else
    {
        printf("All elements are distinct.\n");
    }
    return 0;
}