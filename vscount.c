#include<stdio.h>//program to print and count vowels and constonants in a string
#include<string.h>
int main()
{
int i,v=0,c=0;
char str[100];
printf("enter the string\n");
gets(str);
int l=strlen(str);
for(i=0;i<l;i++)
{
if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
{
v++;
printf(" vow %c\n",str[i]);
}
else
{
c++;
printf(" conso %c\n",str[i]);
}
}
}
printf("no.ofvow=%d , no.of conso=%d",v,c);
}
