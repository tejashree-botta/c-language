#include<stdio.h>
void main()
{
    int a;
    printf("enter the a value \n");
    scanf("%d",&a);
    int res=(a>=3)&&(a<=13);
    printf("%d is in the range of 3-13 i.e is:%d",a,res);
}