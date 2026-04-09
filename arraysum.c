#include<stdio.h>//sum of the elements in a array
int main()
{
int a[5],n,i,sum=0;
printf("enter the array size\n");//to enter the array size
scanf("%d",&n);
printf("enter the elements\n");//to enter the array elements
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum=%d",sum);
}
