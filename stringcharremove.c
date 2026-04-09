//(5)program to remove the characters except alphabets from a string
#include<stdio.h>
#include<string.h>
int main()
{
int i;
char str[100];
printf("enter the string\n");
gets(str);
int l=strlen(str);
printf("after removing the characters:");
for(i=0;i<l;i++)
{
if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
printf("%c",str[i]);
}
}
