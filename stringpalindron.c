//program to check wheather the string is palindron or not?
#include<stdio.h>
#include<string.h>
int main()
{
int i,flag=0;
char str[100];
printf("enter the string\n");
gets(str);
int h=strlen(str)-1;
int l=0;
while(h>l)
{
if(str[l++]!=str[h--])
{
printf("not a palindron\n");
flag=1;
break;
}
}
printf("palindron");
}


