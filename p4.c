#include<stdio.h>
int main()
{
int i,j,n,r;
printf("enter the number:");
scanf("%d",&n);
printf("enter the range:");
scanf("%d",&r);
for(i=1;i<=n;i++)
{
for(j=1;j<=r;j++)
{
if(i>=j)
printf("%d ",i);
else
printf(" ");
}
printf("\n");
}
}

