#include<stdio.h>//program to insret a element at specific position in a array
int main()
{
int n,i,pos,value;
printf("enter the array size\n");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position where you want to insert the element:");
scanf("%d",&pos);
if(pos>n)
{
printf("invalid");
}
else
{
printf("enter the value into the position:");
scanf("%d",&value);
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=value;
}
printf("final array is");
for(i=0;i<=n;i++)
{
printf("%d\n",a[i]);
}
}
