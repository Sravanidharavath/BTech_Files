#include<stdio.h>//program to delete the elements from specific position
int main()
{
int a[100],position,i,n;
printf("enter the number of elements in array:\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position where you want to delete the element:\n");
scanf("%d",&position);
if(position>=n)
printf("delete is not possible:\n");
else
{
for(i=position;i<n;i++)
a[i]=a[i+1];
printf("resultant array:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
}
