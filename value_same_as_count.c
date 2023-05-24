#include<stdio.h>
int main()
{
    int n,a[100],list[100]={0},i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        list[a[i]]++;
    }
    for(i=1;i<100;i++)
    {
        if(list[i]==i)
        {
            c++;
        }
    }
    printf("%d",c);
}