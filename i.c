#include<stdio.h>
void main()
{
    int i=0;
    i=(i++)-(--i)+(++i)-(i--);
    printf("%d",i);
}