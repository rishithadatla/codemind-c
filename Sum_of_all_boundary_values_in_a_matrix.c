#include<stdio.h>
int main()
{
    int n,i,j,m,s=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
}