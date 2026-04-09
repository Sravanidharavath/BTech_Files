#include<stdio.h>
int main()
{
int n,i,position,a[100];
printf("enter the array size:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position where you want to delete:\n");
scanf("%d",&position);
if(position>=n)
{
printf("delete is not possible");
}
else
{
for(i=position;i<n;i++)
a[i]=a[i+1];
printf("resultant array is:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
}
