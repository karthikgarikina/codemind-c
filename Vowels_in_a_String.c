#include<stdio.h>
int main(){
    char str[1000],ch;
    scanf("%[^
] %c",str,&ch);
    int i,d=0;
    for(i=0;str[i]!=NULL;i++){
        if(str[i]==ch){
            printf("True
%d",i);
            d++;
            break;
        }
        
    }
    if(d==0){
        printf("False");
    }
}