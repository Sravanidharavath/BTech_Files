//program to convert a roman numerical ranging from I to L to it's decimal equivalent
#include<stdio.h>
#include<string.h>
//int digit(char);
int main()
{
//int convert(char);
int digit(char);
int i;
long int num=0;
char roman num[100];
printf("enter the roman number\n");
scanf("%s",roman num);
while(roman num[i])
{
if(digit(roman num[i]>=digit(roman num[i+1]))
num=num+digit(roman num[i]);
{
else
{
num =num+(digit(roman num[i+1])-digit(roman num[i]));
i++;
}
i++;
}
printf("dwcimal value is%ld",num);
}
}
