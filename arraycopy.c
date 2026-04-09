#include<stdio.h>
int main()
{
int n,i;
printf("enter the array size\n");
scanf("%d",&n);
int a[n],b[n];
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
}
for(i=0;i<n;i++)
{
printf("%d",b[i]);
}
}
