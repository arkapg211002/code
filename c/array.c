#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,c,d,k,l,m,p,q;
    scanf("%d",&n);c=n*2-1;d=n;k=0;p=c-1;
    int a[(n*2-1)][(n*2-1)];
    for(i=1;i<=n;i++)
    {
        for(j=k;j<c;j++)
        {
            a[k][j]=d;
        }
        for(l=p;l<c;l++)
        {
            a[p][l]=d;
        }
        for(m=k+1;m<=p-1;m++)
        {
            a[m][c-1]=d;
        }
        for(q=k+1;q<=p-1;q++)
        {
            a[q][k]=d;
        }
        c--;p--;k++;d--;
    }
    for(i=0;i<(n*2-1);i++)
    {
        for(j=0;j<(n*2-1);j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}





















