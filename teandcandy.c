#include<stdio.h>
void main ()
{
    int tea,candy;
    printf("enter the amount of tea and candy \n");
    scanf("%d%d",&tea,&candy);
    if(tea<5||candy<5)
    {
        printf("bad=0");
    }
    else if(tea>=2*candy||candy>=2*tea)
    {
        printf("great=2");
    }
    else
    {
        printf("good=1");
    }
}