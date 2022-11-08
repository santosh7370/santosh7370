#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
printf("enter the string\n");
scanf("%s",&s1);
strcpy(s1,s2);
printf("%s\n",s1);
printf("%s\n",s2);
getch();
}
