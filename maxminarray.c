#include<stdio.h>//program to print maximum amd minimum of the array
int main()
{
int n,i,j,max,min;
printf("enter the array size\n");
scanf("%d",&n);
int a[n];
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
{
min=a[i];
}
if(max<a[i])
{
max=a[i];
}
}
printf("min and max of array=%d\n%d\n",min,max);
}

