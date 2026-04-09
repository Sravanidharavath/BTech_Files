//(1)program to remove duplicate elements from an array
#include<stdio.h>
int main()
{
int n,i,j,k;
printf("enter the array size\n");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
for(k=j;k<n;k++)
{
a[k]=a[k+1];
}
n--;
j--;
}
}
}
printf("resultant array:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
