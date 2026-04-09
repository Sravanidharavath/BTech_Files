#include<stdio.h>
int main()
{
FILE *f;
f=fopen("puts.txt","w");
fputs("hello sravani dharavath",f);
printf("content written into the file using fputs");
fclose(f);
return 0;
}
