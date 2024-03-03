#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    int t=a*b;
    for(i=1;i<=t;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("%d",i);
            break;
        }
    }
}