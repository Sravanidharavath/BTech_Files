#include<stdio.h>
void linear(int [],int);
int main()
{
int n,i,k;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
linear(a,n);
}
void linear(int a[],int n)
{
int i,k,f=0;
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
printf("element was found at %d location",i);
}
else
{
printf("element was not found");
}
}

