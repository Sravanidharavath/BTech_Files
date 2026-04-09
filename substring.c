//to copy one string into another string at specific position
#include<stdio.h>
#include<string.h>
int main()
{
int i,p;
char str1[100];
char str2[100];
char str3[100];
printf("enter the first string\n");
gets(str1);
printf("enter the second string\n");
gets(str2);
printf("enter the position to insert:");
scanf("%d",&p);
int l1=strlen(str1);
int l2=strlen(str2);
if(p<l1)
{
strncpy(str3,str1,p);
for(i=0;str2[i]!='\0';i++)
{
str3[p+i]=str2[i];
}
for(i=p;str1[i]!='\0';i++)
{
str3[i+l2]=str1[i];
}
puts(str3);
}
}

