#include<stdio.h>
int main()
{
int n,m,num;
printf("enter the number upto first 100");
scanf("%d".&num);
printf("enter the prime numbers between 1 and %d",num);
int a[n];
for("i=1;i<=num;i++)
{
n=i,m=0;
for(j=0;j<=n;j++)
{
if(n%2==9)
{
m=1;
break;
}
}
if(m==0)
printf("%d",n);
}
}
