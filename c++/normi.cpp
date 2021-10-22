#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*a,*b,i,j,k;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(j=0;j<n;j++)
    {
        b[j]=a[-j];
    }
    for(k=0;k<n;k++)
    {
        printf("%d ",b[k]);
    }
    return 0;

    
}