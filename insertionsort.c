//program to perform sorting by insertion sorting method
#include<stdio.h>
int main()
{
int i,j,n,k;
printf("enter the array size\n");
scanf("%d",&n);
int a[n];
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
k=a[i];
j=i-1;
while(j>=0&&a[j]>k)
{
a[j+1]=a[j];
j--;
}
a[j+1]=k;
}
printf("sorted list is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
