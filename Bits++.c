#include<stdio.h>
int main()
{
    int n,i,r=0;
    char s[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);

            if((s[1]=='+' && s[2]=='+') || (s[0]=='+' && s[1]=='+'))
            {
                r++;
            }
            else
            {
                r--;
            }
    }
    printf("%d",r);
}