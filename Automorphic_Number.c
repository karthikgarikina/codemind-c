#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,de=0;
     scanf("%d",&n);
    int t=n;
    while(t!=0)
    {
       d=t%10;
       de++;
       t/=10;
    }
    int s=n*n,c=0,tt;
    while(s!=0)
    {
        tt=pow(10,de);
        d=s%tt;
        if(d==n)
        {
            c++;
        }
        break;
    }
    if(c==0)
    {
        printf("Not an Automorphic Number");
    }
    else
    {
        printf("Automorphic Number");
    }
}