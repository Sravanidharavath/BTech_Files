//program to convert the string into uppercase (or) lowercase without using string function
#include<stdio.h>
#include<string.h>
int main()
{
int i;
char str[100];
printf("enter the string\n");
gets(str);
int l=strlen(str);
for(i=0;i<l;i++)
{
if(str[i]>='a'&&str[i]<='z')
{
str[i]=str[i]-32;
}
else if(str[i]>='A'&&str[i]<='Z')
{
str[i]=str[i]+32;
}
}
printf("%s",str);
}
