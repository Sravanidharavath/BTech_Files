#include<stdio.h>
void insertion(int [],int);
int main()
{
int n,i;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
insertion(a,n);
}
void insertion(int a[],int n)
{
int i,j,k;
for(i=1;i<n;i++)
{
k=a[i];
j=i-1;
while(j>=0&&a[j]>k)
{
a[j+1]=a[j];
j--;
}
a[j+1]=k;
}
printf("sorter array:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
