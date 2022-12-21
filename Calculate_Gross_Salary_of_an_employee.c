#include<stdio.h>
int main()
{
    float bs,hra,da,pf,g;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=(bs*12)/100;
    printf("%.2f
",pf);
    g=hra+da+pf+bs;
    printf("%.2f",g);
}