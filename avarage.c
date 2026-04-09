#include<stdio.h>
int main()
{
int sub1,sub2,sub3,sum;
float per;
printf("enter three subjects marks\n");
scanf("%d%d%d",&sub1,&sub2,&sub3);
per=sum/3*100;
if(per>=90)
{
printf("grade is A+");
}
else if(per>=80 & per<90)
{
printf("grade is A");
}
else if(per>=70 & per<80)
{
printf("grade is B");
}
else if(per>=60 & per<70)
{
printf("grade is C");
}
else if(per>=50 & per<60)
{
printf("grade is D");
}
else
{
printf("fail");
}
return 0;
}

