#include<stdio.h>
int main()
{
int marks;
printf("enter marks of the students\n");
for(marks>=70 && marks<=100)
{
printf("distinict");
}
else if(marks>=60 && marks<70)
{
printf("firstclass");
}
else if(marks>=40 && marks<60)
{
printf("secondclass");
}
else if(marks<40)
{
printf("fail");
}
return 0;
}
