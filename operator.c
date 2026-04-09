#include<stdio.h>//program to print all opreators available in C
int main()
{
int a,b,c;
printf("enter a,b,c values\n");
scanf("%d%d%d",&a,&b,&c);
printf("add=%d\nsum=%d\n",a+b,a-b);
printf("mul=%d\ndiv=%d\n",a*b,a/b);
printf("bitwise AND=%d\n",a&b);
printf("bitwise OR=%d\n",a/b);
printf("bitwise XOR=%d\n",a^b);
printf("bitwise NOT of a,b=%d\n%d\n",~a,~b);
printf("bitwise left shift and right shift=%d\n%d\n",a<<c,b>>c);
printf("pre incr and post incr=%d\n%d\n",++a,a++);
printf("add and sub assignment=%d\n%d\n",a+=c,b-=c);
printf("mul and div assignment=%d\n%d\n",a*=c,b/=c);
}
