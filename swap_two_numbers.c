#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i=i+2)
    {
        int swap=a[i];
        a[i]=a[i+1];
        a[i+1]=swap;
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
    