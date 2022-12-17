#include<stdio.h>
int main()
{
    int s,h,m,sec;
    scanf("%d",&s);
    h=s/3600;
    m=(s-h*3600)/60;
    sec=s-h*3600-m*60;
    printf("H:M:S-%d:%d:%d",h,m,sec);
}