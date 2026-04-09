#include<stdio.h>
int main()
{
int n,i,j,c,sum=0;
printf("enter the size\n");
scanf("%d",&n);
int a[n],f[50];
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
f[i]=-1;
}
for(i=0;i<n;i++)
{
c=1;
for(j=i+1;j<n;j++);
{
if(a[i]==a[j])
{
c++;
f[j]=0;
}
}
if(f[j]!=0)
{
f[i]=c;
}
}
for(i=0;i<n;i++)
{
if(f[i]!=0)
printf("frequency of %d=%d\n",a[i],f[i]);
}
}


