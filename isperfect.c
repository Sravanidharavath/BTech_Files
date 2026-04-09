#include<stdio.h>//(9)program to check whether a number is perfect/not  
int main()
{
int i,num,sum=0;
printf("enter any number");
scanf("%d",&num);
for(i=1;i<num;i++)
{
 if(num%i==0)
  {
   sum=sum+i;
  }
}
if(sum==num)
 {
 printf("%d is a perfect number",num);
 }
else
 {
 printf("%d is not a perfect number",num);
 }
}

