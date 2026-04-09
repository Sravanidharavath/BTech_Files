#include<stdio.h>
#include<math.h>
int main()
{
int r,s=0,n,t;
printf("enter any number");
scanf("%d",&n);
t=n;
while(n>0)
{r=n%10;
s=s+pow(r,3);
n=n/10;}
if(t==s)
printf("amstrong");
else
printf("not amstrong");
}

