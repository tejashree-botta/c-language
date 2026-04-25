#include<stdio.h>
void main()
{
    int a=65;
    int b=++a;
    int c=((++a)-(b--));
    int d=((a++)+(--b)+(c++));
    printf("a=%d \t b=%d \t c=%d \t d=%d \n",a,b,c,d);
    printf( "%d",a+b+c+d);
}