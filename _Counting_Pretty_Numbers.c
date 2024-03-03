#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int a,b,i,te,d,c=0;
        scanf("%d%d",&a,&b);
        c=0;
        for(i=a;i<=b;i++)
        {
            while(i!=0)
            {
                d=i%10;
                if(d==2 || d==3 || d==9)
                {
                    c++;
                }
                break;
            }
        }
        printf("%d
",c);
    }
}