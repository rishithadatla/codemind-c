#include<stdio.h>
int main()
{
    int n,r,t,s=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(t==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}