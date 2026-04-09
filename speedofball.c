#include<stdio.h>//speed of ball from the floor
#include<math.h>
int main()
{
int u=0,s,a=9.8,f;
float t;
printf("enter distence and no.of floors");
scanf("%d%d",&s,&f);
while(f>0)
{
t=sqrt(2*s/a);
printf("floor=%d,time=%f\n",f,t);
f=f-1;
s=s-3;
}
}
