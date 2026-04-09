#include<stdio.h>
int main()
{
char str[100];
int i,vowels=0,consonants=0;
printf("enter the string\n");
gets(str);
for(i=0;str[i];i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
vowels++;
else
consonants++;
}
printf("vowels=%d\n",vowels);
printf("consonants=%d\n",consonants);
}

