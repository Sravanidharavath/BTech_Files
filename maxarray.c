#include<stdio.h>
int main()
{
int a[10],n,i,j,max;
printf("enter the array size\n");
scanf("%d",&n);
printf("enter the elements of array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=a[0];
for(j=0;j<n;j++)
{
if(max<a[j])
max=a[j];
}
printf("maximum=%d",max);
}


