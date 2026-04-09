#include<stdio.h>
void selection(int [],int);
int main()
{
int n,i;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
selection(a,n);
}
void selection(int a[],int n)
{
int i,j,t,min;
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
min=j;
}
t=a[i];
a[i]=a[min];
a[min]=t;
}
printf("sorted array:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}


