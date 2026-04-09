#include<stdio.h>//program to delete and insert the element at a specifit poition
int main()
{
int i,n,position,size,value,a[100];
printf("enter the array size:\n");
scanf("%d",&n);
printf("enter the elements:\n");
scanf("%d",&size);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position where you want to delete:\n");
scanf("%d",&position);
if(position>=n)
{
printf("not possible:\n");
}
else
{
printf("enter the position where you want to insert:\n");
scanf("%d",&value);
for(i=size-1;i>=position;i--)
{
a[i+1]=a[i];
}
a[position]=value;
for(i=position;i<n;i++)
{
a[i]=a[i+1];
}
printf("resultant array:\n");
for(i=0;i<n-1;i++)
for(i=0;i<=size;i++)
printf("%d\n",a[i]);
}
}
