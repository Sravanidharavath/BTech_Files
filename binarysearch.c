#include<stdio.h>
int main()
{
int n,i,j,k,t,f=0;
printf("enter the array size\n");
scanf("%d",&n);
int a[n];
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
//printf("enter the searching element\n");
//scanf("%d",&k);
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
printf("sorted array list is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\nsearching element is:");
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
else if(k<a[mid])
{
high=mid-1;
}
}
if(f==1)
{
printf("\nelement is found at %d location\n",mid);
}
else
{
printf("\nelement is not found\n");
}
}






