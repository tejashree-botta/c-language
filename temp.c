#include<stdio.h>
void main ()
{
    int temp;
    printf("enter the temp \n");
    scanf("%d",&temp);
    int summer;
    printf("enter 1 if it summer or o if it is not summer:\n");
    scanf("%d",&summer);
    if(summer==1)
    {
      if(temp>=60&&temp<=100)
      {
          printf("true");
      }
      else
      {
          printf("false");
      }
    }
    if(summer==0)
    {
        if(temp>=60&&temp<=90)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
}