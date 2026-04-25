#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    printf("enter the string:\n");
    scanf("%s",str);
    int sum=0;
    for(int i=0;i<strlen(str)-1;i++)
    {
        int num=0;
        if(str[i]>='0'&&str[i]-1<='9')
        {
            for(int j=i;j<strlen(str)-1;j++)
            {
                if(str[j]>='0'&&str[j]<='9')
                {
                    num=num*10+(str[j]-'0');
                    i++;
                }
                else
                {
                    break;
                }
            }
        }
        printf("num=%d\n",num);
    }
}