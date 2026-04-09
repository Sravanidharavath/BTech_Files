#include<stdio.h>//(8) program to print amstrong numbers b/w 1 to n
#include<math.h>
int main()
{
int n,sum,i,t,r;
printf("enter any number:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
t=i;
sum=0;
while(t!=0)
{
r=t%10;
sum+=r*r*r;
t=t/10;
}
if(sum==i)
printf("%d is an amstrong number\n",i);
}
}
