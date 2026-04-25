#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character \n");
    scanf("%d",&ch);
    int res=(ch>='A')&&(ch<='Z');
    printf("%c is in the upper case alphabet i.e is:%d",ch,res);
}