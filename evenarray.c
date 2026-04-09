#include<stdio.h>//program to print the even numbers in a array
int main()
{
int a[5],n,i,j;
printf("enter the array size\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
if(a[j]%2==0)
printf("%d",a[j]);
}
}

