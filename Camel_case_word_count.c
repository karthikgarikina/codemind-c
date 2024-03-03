#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int i,c=1;
    for(i=1;s[i]!=NULL;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            c++;
        }
    }
    printf("%d",c);
}