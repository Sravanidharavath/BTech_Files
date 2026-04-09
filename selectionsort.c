//program to perform sorting by selection sorting method
#include<stdio.h>
int main()
{
int n,i,j,t,min;
printf("enter the array size\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
{
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
min=j;
}
}
t=a[i];
a[i]=a[min];
a[min]=t;
}
printf("sorted array list is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}


