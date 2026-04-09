//program to search any element from the given array of elements
#include<stdio.h>
int main()
{
int i,n,k,f=0;
printf("enter the array size\n");
scanf("%d",&n);
int a[n];
printf("enter array size\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the searching element\n");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(k==a[i])
{
f=1;
break;
}
}
if(f==1)
{
printf("element is found at %d location",i);
}
else
{
printf("element is not found");
}
}








