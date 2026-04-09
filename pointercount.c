//program to count length of a string using pointer
#include<stdio.h>
int main()
{
int count=0;
char str[100];
printf("enter the string\n");
gets(str);
char *p;
p=str;
while(*p!='\0')
{
count++;
p++;
}
printf("length of the string=%d",count);
}
