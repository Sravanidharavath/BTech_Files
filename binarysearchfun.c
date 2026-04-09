#include<stdio.h>
void binary(int [],int);
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
binary(a,n);
}
void binary(int a[],int n)
{
int i,j,t,k,f=0;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("sorted list:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\nenter the searching element:");
scanf("%d",&k);
int low=0,high=n-1,mid;
while(low<=high)
{
mid=(low+high)/2;
if(k==a[mid])
{
f=1;
break;
}
else if(k>a[mid])
{
low=mid+1;
}
else
{
high=mid-1;
}
}
if(f==1)
{
printf("element was found at %d location",mid);
}
else
{
printf("element was not found");
}
}

