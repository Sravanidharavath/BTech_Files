//(4)program to compare two strings without using strcmp function
#include<stdio.h>
#include<string.h>
int main()
{
int count=0,i;
char s1[20],s2[30];
printf("enter first strings:\n");
gets(s1);
printf("enter second string:\n");
gets(s2);
for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
{
if(s1[i]!=s2[i])
{
count++;
break;
}
}
if(count==0)
{
printf("strings are equal");
}
else
{
printf("strings are not equal");
}
}
