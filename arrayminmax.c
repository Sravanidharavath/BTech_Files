#include<stdio.h>
int main()
{
int i,n,min,max,s=0;
printf("enter array size\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
s=s+a[i];
}
max=min=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
printf("min=%d\n",min);
printf("max=%d\n",max);
printf("avg=%.2f\n",(float)s/n);
}
