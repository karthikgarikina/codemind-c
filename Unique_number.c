#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t1,t2,c=0,e=0,i,j,d;
    t1=n;
    t2=n;
    while(t1!=0)
    {
        d=t1%10;
        c++;
        t1/=10;
    }
    int a[c];
    c=0;
    while(t2!=0)
    {
        d=t2%10;
        a[c]=d;
        c++;
        t2/=10;
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(a[i]==a[j])
            {
                e++;
                break;
            }
        }
    }
    if(e==0)
    {
        printf("Unique Number");
    }
    else
    {
         printf("Not Unique Number");
    }
    
}