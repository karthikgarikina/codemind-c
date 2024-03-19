#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int a[n1][n2],i,j;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int m=0,s=0;
    for(i=0;i<n1;i++)
    {
        s=0;
        for(j=0;j<n2;j++)
        {
            s=s+a[i][j];
        }
        if(s>m)
        {
            m=s;
        }
    }
    for(i=0;i<n2;i++)
    {
        s=0;
        for(j=0;j<n1;j++)
        {
            s=s+a[j][i];
        }
        if(s>m)
        {
            m=s;
        }
    }
    printf("%d",m);
}