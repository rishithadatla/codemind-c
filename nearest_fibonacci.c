#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int first=0,second=1;
    int third=first+second;
    while(third<=n)
    {
        first=second;
        second=third;
        third=first+second;
    }
    if(third-n<n-second)
    {
        printf("%d",third);
    }
    else if(third-n>n-second)
    {
        printf("%d",second);
    }
    else
    {
        printf("%d %d",second,third);
    }
}