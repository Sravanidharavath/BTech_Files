#include<stdio.h>
int main()
{
int first,second,add,subtract,multiply;
float divide;
printf("enter two numbers\n");
scanf("%d%d",&first,&second);
add=first+second;
subtract=first-second;
multiply=first*second;
divide=first/(float)second;
printf("sum=%d\n",add);
printf("difference=%d\n",subtract);
printf("multiplication=%d\n",multiply);
printf("division=%.2f\n",divide);
return 0;
}

