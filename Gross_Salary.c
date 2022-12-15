#include<stdio.h>
int main()
{
    int bs,da,hra;
    scanf("%d",&bs);
    float g;
    if(bs<=10000)
    {
        da=(bs*80)/100;
        hra=(bs*20)/100;
        g=da+hra+bs;
        printf("%.2f",g);
    }
    else if(bs<=20000)
    {
        da=(bs*90)/100;
        hra=(bs*25)/100;
        g=da+hra+bs;
        printf("%.2f",g);
    }
    else if(bs>20000)
    {
        da=(bs*95)/100;
        hra=(bs*30)/100;
        g=da+hra+bs;
        printf("%.2f",g);
    }
}