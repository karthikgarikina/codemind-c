#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n,i,d,r=0,s=0,r1;
    while(t!=0)
    {
        d=t%10;
        r=r*10+d;
        t/=10;
    }
    r1=r*r;
    while(r1!=0)
    {
        d=r1%10;
        s=s*10+d;
        r1/=10;
    }
    if(s==n*n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}