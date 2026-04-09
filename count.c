#include<stdio.h>//(1)counting of numbers
int main()
{
int num,count=0;
printf("enter any number:");
scanf("%d",&num);
while(num>0)
{
num=num/10;
count++;
}
printf("count=%d",count);
return 0;
}

