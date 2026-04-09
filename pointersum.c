//to print sum of array elements using pointers
#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the size\n");
scanf("%d",&n);
int a[n];
int *p;
p=a;
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
sum=sum+*(p+i);
}
printf("sum=%d",sum);
}
