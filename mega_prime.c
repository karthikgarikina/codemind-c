#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n;
    int i,c=0,e=0,p=0,d=0,di=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        while(n!=0)
        {
            d=n%10;
            di++;
            e=0;
            if(d==1)
            {
                e++;
                break;
            }
            for(i=2;i<d;i++)
            {
                if(d%i==0)
                {
                    e++;
                    break;
                }
            }
            if(e==0)
            {
                p++;
            }
            n/=10;
        }
    }
        if(p==di && t>1 && c==0)
    {
        printf("Mega Prime");
    }
   
    else{
        printf("Not Mega Prime");
      }
}
