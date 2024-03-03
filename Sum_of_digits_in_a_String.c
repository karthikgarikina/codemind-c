#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]",s);
    int i,re=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='1' || s[i]=='2' ||s[i]=='3' ||s[i]=='4' ||s[i]=='5' ||s[i]=='6' ||s[i]=='7' ||s[i]=='8' ||s[i]=='9')
        {
             re += (s[i] - '0');
        }
    }
    printf("%d",re);
}