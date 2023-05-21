#include<stdio.h>
int main()
{
    int h,sp,sd;
    scanf("%d%d%d",&h,&sp,&sd);
    if(h>50&&sp>60&&sd>100)
    {
        printf("10");
    }
    else if(h>50&&sp>60)
    {
        printf("9");
    }
    else if(sp>60&&sd>100)
    {
        printf("8");
    }
    else if(h>50&&sd>100)
    {
        printf("7");
    }
    else if(h>50||sp>60||sd>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}