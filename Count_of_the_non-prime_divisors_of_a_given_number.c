#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,c=0,r=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    c++;
                    break;
                }
            }
            if(c==0)
            {
                r++;
            }
        }
    }
    printf("%d",c+1);
}