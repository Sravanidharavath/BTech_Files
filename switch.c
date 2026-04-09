#include<stdio.h>//(b)program to print operands
int main()
{
int a,b,c;
char ch;
printf("enter the operator");
scanf("%c",&ch);
printf("enter a,b values\n");
scanf("%d%d",&a,&b);
switch(ch)
{
case'+':printf("addition=%d",a+b);
break;
case'-':printf("subtraction=%d",a-b);
break;
case'*':printf("multiplication=%d",a*b);
break;
case'/':printf("division=%d",a/b);
break;
default:printf("invalid");
}
}
