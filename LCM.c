#include<stdio.h>//(6)program to find LCM of two numbers
int main()
{
int n1,n2,i;
printf("enter n1 and n2 values");
scanf("%d%d",&n1,&n2);
for(i=1;i>0;i++)
{
if(i%n1==0&&i%n2==0)
{
printf("LCM of %d and %d is=%d",n1,n2,i);
break;
}
}
}
