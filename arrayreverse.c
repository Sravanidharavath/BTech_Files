#include<stdio.h>
int main()
{
int n,i;
printf("enter any array size\n");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
printf("%d",i);
}
return 0;
}
