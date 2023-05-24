#include<stdio.h>
int main()
{
    int n,i,k=0,j,l[100],m[100];
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            m[c]=a[i];
            c++;
        }
        else
        {
            l[k]=a[i];
            k++;
        }
    }
    for(i=0;i<c;i++)
    {
        printf("%d ",m[i]);
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",l[i]);
    }
}