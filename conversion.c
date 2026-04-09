#include<stdio.h>
#include<math.h>
int main()
{
/*float a;
printf("enter a value\n");
scanf("%f",&a);
int b=(int)a;
printf("%d",b);
}*/

/*int a,b,c;
printf("enter a,b,c values\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is maximum%d",a);
}
else if(b>a&&b>c)
{
printf("b is maximum%d",b);
}
else
{
printf("c is maximum%d",c);
}
}*/

float x,y,p,t,r;
printf("enter the principal,time and rate of interest\n");
scanf("%f%f%f",&p,&t,&r);
x=p*t*r/100;
printf("simple interest=%f\n",x);
y=p*pow(1+r/100,t);
printf("compound interest=%f\n",y);
}
