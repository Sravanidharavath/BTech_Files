include<stdio.h>//program to print string concatenation
#include<string.h>
int main()
{
char str1[30]="sravani";
char str2[30]="dharavath";
strncat(str1,str2,5);
printf("%s",str1);
}

//program to print a string
#include<stdio.h>
#include<string.h>
char str[10];
printf("enter the string");
gets(str);
printf("%s",str);
}

//program to print string count/length without using strlen function
#include<stdio.h>
#include<string.h>
int main()
{
int i,count=0;
char str[100];
printf("enter the string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
count++;
}
printf("count=%d",count);
}
//output:enter the string
hello sravani
count=13

