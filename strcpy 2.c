#include<stdio.h>
#include<conio.h>
int main()
{
char s1[50],s2[50];
printf("enter the string\n");
gets(s1);
strcpy(s1,s2);
printf("%s",s1);
printf("%s",s2);
getch();
}
