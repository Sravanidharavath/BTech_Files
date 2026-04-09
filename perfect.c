#include<stdio.h>//(10) program to print all perfect numbers b/w 1 to n
int main()
{
int n,i,j,sum;
printf("enter number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=0;
for(j=1;j<i;j++)
{
if(i%j==0)
sum=sum+j;
}
if(sum==i)
printf("%d is perfect number\n",i);
}
}

