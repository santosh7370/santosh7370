#include<stdio.h>
#include<string.h>
void main()
{
int n;
char name[50];
printf("enter the string\n");
gets(name);
n=strlen(name);
printf("length of string %d",n);
getch();
}
