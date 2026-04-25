#include<stdio.h>
void main()
{
    int a=5;
    int b=(a++)+(++a)+(a--);
    printf("a=%d b=%d \t",a,b);
    printf("\n %d",a+b);
}