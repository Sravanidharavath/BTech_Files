//string from function
#include<stdio.h>
#include<string.h>
char* display();
char* display()
{
char str[100];
char *p;
p=&str[0];
printf("enter the string\n");
gets(str);
return p;
}
int main()
{
printf("%s",display());
}
