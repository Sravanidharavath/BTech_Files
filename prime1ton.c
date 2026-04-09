#include<stdio.h>
int main()
{
int n,m,num;
int i=1,j=2;
printf("enter any number upto you want to print prime number");
scanf("%d",&num);
printf("prime number between 1 and %d is given below",num);
for(i=1;i<=num;i++)
{
n=i,m=0;
for(j=2;j<=n-1;j++)
{
if(n%j==0)
{
m=1;
break;
}
}
if(m==0)
printf("%d\n",n);
}
return 0;
}
