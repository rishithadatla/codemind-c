#include<stdio.h>
int main()
{
    int h,m,M;
    scanf("%d",&M);
    h=M/60;
    m=(M%60);
    printf("%d Hour(s) %d Minute(s)",h,m);
    
}