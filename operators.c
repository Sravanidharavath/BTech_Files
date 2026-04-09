#include<stdio.h>
int main()
{
int a,b,x,y,d,s;
printf("enter a,b values");
scanf("%d%d",&a,&b);
printf("sum is %d\n",a+b);
printf("substraction is %d\n",a-b);
printf("miltiplication is %d\n",a*b);
printf("division is %d\n",a%b);
printf("enter x,y values");
scanf("%d%d",&x,&y);
printf("enter d,s values of either 0 or 1");
scanf("%d%d",&d,&s);
printf("post increment is %d\n",d++);
printf("post decrement is %d\n",++s);
if(x&y)
printf("true");
else
printf("false");
return 0;
}
