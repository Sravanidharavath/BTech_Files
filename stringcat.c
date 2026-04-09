//(2)program to concatnate two strings without using strcat function
#include<stdio.h>
#include<string.h>
int main()
{
int l1,l2,i;
char str1[30],str2[20];
printf("enter first strings\n");
gets(str1);
printf("enter secong string\n");
gets(str2);
l1=strlen(str1);
l2=strlen(str2);
for(i=0;i<=l2;i++)
{
str1[l1+i]=str2[i];
}
printf("after concatenation:%s\n",str1);
}
