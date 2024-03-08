#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(i*i==n)
        {
            break;
        }
        else if(i*i>n)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}