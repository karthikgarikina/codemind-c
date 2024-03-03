#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i,t,p=1,d;
    for(i=a;i<=b;i++)
    {
        t=i;
        p=0;
        while(t!=0)
        {
            d=t%10;
            p=p*10+d;
            t/=10;
        }
        if(i==p)
        {
            printf("%d ",i);
        }
    }
}