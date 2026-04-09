#include<stdio.h>//program to print reverse of a string using pointers
#include<string.h>
int main()
{
int i,n;
char str[100];
printf("enter the string\n");
gets(str);
char *p;
p=str;
int l=strlen(str);
printf("reverse of string:");
for(i=l-1;i>=0;i--)
{
printf("%c",*(p+i));
}
}
