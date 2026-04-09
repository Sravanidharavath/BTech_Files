#include<stdio.h>//(5)program to find HCF of two numbers
int main()
{
int n1,n2,i,m=1;
printf("enter n1,n2 values");
scanf("%d%d",&n1,&n2);
for(i=1;i<=n1;i++)
{
if(n1%i==0&&n2%i==0)
{
m=i;
}
}
printf("HCF of %d and %d is %d",n1,n2,m);
}
