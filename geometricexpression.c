#include<stdio.h>
#include<math.h>
int main()
{
int x,n,i,t,sum=0;
printf("enter x and n values upto where you want\n");
scanf("%d%d",&x,&n);
printf("expression is:");
for(i=0;i<=n;i++)
{
t=pow(x,i);
printf("%d",t);
sum=sum+t;
}
printf("\nsum of the expression is %d\n",sum);
}


