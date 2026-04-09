//program to read the created file in treminal
#include<stdio.h>
int main()
{
FILE *f,*fp;
char s;
f=fopen("file.txt","r");
while((s=fgetc(f))!=EOF)
{
printf("%c",s);
}
fp=fopen("f5.txt","a");
fputc('a',fp);
return 0;
}
