//program to check wheather a string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,l;
int flag=0;
printf("enter the string:\n");
scanf("%s",str);
l=strlen(str);
for(i=0;i<l;i++)
{
if(str[i]!=str[l-i-1])
{
flag=1;
break;
}
}
if(flag)
{
printf("%s is not a palindrome",str);
}
else
{
printf("%s is a palindrome",str);
}
}
