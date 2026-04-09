#include<stdio.h>//program to print minimum array
int main()
{
int a[5],n,min,i,j;
printf("enter the array size\n");
scanf("%d",&n);
printf("enter the elements of array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
min=a[0];
for(j=0;j<n;j++)
{
if(min>a[j])
min=a[j];
}
printf("minimum=%d",min);
}


