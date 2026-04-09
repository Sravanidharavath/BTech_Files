#include<stdio.h>
int main()
{
int  n,i;
printf("enter any array size\n");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}
return 0;
}

