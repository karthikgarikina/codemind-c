#include<stdio.h>
int main()
{
    int s,e;
    scanf("%d
%d",&s,&e);
    int i,q,d,c=0,c1=0;
    for(i=s;i<=e;i++)
    {
        c=0;
        c1=0;
        if(i%10==0)
        {
            continue;
        }
        q=i;
        while(q!=0)
        {
            d=q%10;
            c++;
            if(i%d==0)
            {
                c1++;
            }
            q/=10;
        }
         if(c==c1)
         {
            printf("%d ",i);
         }
      
    }
}