#include<stdio.h>
int main()
{
    int n,r,d,s=0;
    scanf("%d",&n);
    r=n*n;
    while(r!=0)
    {
        d=r%10;
        r=r/10;
        s=s+d;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}