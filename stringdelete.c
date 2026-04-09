//program to delete no.of characters from a given string fron a sprcific position
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int p,n,i;
printf("enter the string\n");
gets(str);
printf("enter the character position\n");
scanf("%d",&p);
printf("enter no.of deleting char\n");
scanf("%d",&n);
int l=strlen(str);
for(i=p+n;i<l;i++)
{
str[i-n]=str[i];
}
str[i-n]='\0';
printf("%s",str);
}
/*output
enter the string sravvvani
enter the character position 3
enter no. of deleting characters 2
sravani*/
