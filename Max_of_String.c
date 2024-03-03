#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]",s);
    int r=97,i;
    char re;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>r)
        {
            r=s[i];
            re=s[i];
            
        }
    }
    printf("%c",re);
}