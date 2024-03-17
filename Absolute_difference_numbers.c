#include<stdio.h>
#include<math.h>
int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    int t=n,dc=0,a,l,f,p;
    while(t!=0)
    {
        dc++;
        t/=10;
    }
      p=pow(10,d);
      l=n%p;
      a=dc-d;
      p=pow(10,a);
      f=n/p;
    
    printf("%d",abs(l-f));
}