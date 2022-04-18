#include <stdio.h>
void main()
{

    int a[200],i,n,p=0;
    printf("Enter the number of  elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++)
    {
        if (a[p]<a[i])
        {
            p=i;
            break;
        }
        
    }

    printf("The greatest number in array is %d at postion %d ",a[p],p);
}