#include<stdio.h>
int main()
{
FILE *f1,*f2;
char ch;
f1=fopen("file2.txt","r");
f2=fopen("file1.txt","w+");
while((ch==getc(f1))!=EOF)
putc(ch,f2);
printf("content copied successfully");
fclose(f1);
fclose(f2);
}


