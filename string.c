#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
char str1[50];
int opt,len;
printf("DHARAVATH SRAVANI\n");
printf("1.convert string into uppercase\n");
printf("2.reverse the string\n");
printf("3.copy one string into another string\n");
printf("4.compute length of string");
printf("enter the string");
scanf("%s",str);
printf("enter your choice");
scanf("%d",&opt);
switch (opt)
{
case1:srtupr(str);
printf("the string in upper is:%s",str);
break;
case2:strrev(str);
printf("reverse of the string is:%s",str);
break;
case3:strcpy(str);
printf("new copied string is:%s",str);
break;
case4:len=strlen(str);
printf("the length of the string is:%d",len);
break;
default:printf("you entered a wrong choice");
}
}

