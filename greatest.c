#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("greatest number is %d",a);
}
else
{
printf("greatest number is %d",b);
}
return 0;
}
