#include<stdio.h>
int main()
{
int sub1,sub2,sub3,per;
float sum;
printf("enter three subject marks:");
scanf("%d%d%d",&sub1,&sub2,&sub3);
sum=sub1+sub2+sub3;
per=sum/3*100;
if(per>=90)
{
printf("\nA+ grade");
}
else if(per<90)
{
printf("\nA grade");
}
else if(per<80)
{
printf("\nB grade");
}
else if(per<70)
{
printf("\nC grade");
}
else if(per<60)
{
printf("\nD grade");
}
else
{
printf("\nfail");
}
return 0;
}


