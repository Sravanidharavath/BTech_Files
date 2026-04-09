//program to copy one string into another string without using strcpy function
#include<stdio.h>
#include<string.h>
int main()
{
int i;
char s1[50],s2[30];
printf("enter string1:\n");
gets(s1);
for(i=0;s1[i]!='\0';i++)
{
s2[i]=s1[i];
}
s2[i]='\0';
printf("string2:%s",s2);
}
