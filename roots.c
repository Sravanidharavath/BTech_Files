#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
double root1,root2;
printf("enter a,b and c where a*x*x+b*x+c.0\n");
scanf("%lf%lf%lf",&a,&b,&c);
d=b*b-4*a*c;
if(d<0)
{
printf("first root=%.2lf+i%.2lf\n",-b/(double)(2*a),sqrt(-d)/(2*a));
}
else
{
printf("second root=%.2lf-i%.2lf\n",-b/(double)(2*a),sqrt(-d)/(2*a));
}
return 0;
}
