//to printf arrays elements in reverse order using pointer
#include<stdio.h>
int main()
{
int n,i;
printf("enter the array size\n");
scanf("%d",&n);
int a[n];
int *p;
p=a;
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
printf("reversed array:");
for(i=n-1;i>=n;i--)
{
printf("%d",*(p+i));
}
}
