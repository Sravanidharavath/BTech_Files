//program to print the frequency of all characters in a given string?
#include<stdio.h>
int main()
{
int i;
char str[100];
printf("enter the string\n");
gets(str);
int f[128]={0};//to make zeros in all positions
for(i=0;str[i]!='\0';i++)
{
f[str[i]]++;
}
for(i=0;i<128;i++)
{
if(f[i]!=0)
{
printf("character %c occurs %d times\n",i,f[i]);
}
}
}
