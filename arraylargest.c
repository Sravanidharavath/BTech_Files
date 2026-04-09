//(6)program to print the largest element in an array
#include<stdio.h>
int main()
{
int i,n,m,max;
int *p;
printf("enter the array size\n");
scanf("%d",&n);
int a[n];
printf("enter the elements in an array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
p=a;
max=*p;
for(i=0;i<n;i++)
{
if(max<*p)
{
max=*p;
}
p++;
}
printf("largest element=%d",max);
}
