//passing the collection of elements as an arguements
//array as an arguement
//program to print sum of array elements using functions
#include<stdio.h>
int sumarray(int [],int);
int main()
{
int i,n;
printf("enter array size\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int sum=sumarray(a,n);
printf("sum=%d",sum);
}
int sumarray(int a[],int n)
{
int sum=0,i;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
return sum;
}
