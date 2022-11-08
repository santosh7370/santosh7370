#include<string.h>
#include<stdio.h>
void main()
{
    char name[100];
    int n;
    printf("enter the string\n");
    scanf("%s",&name);
    n=strlen(name);
    printf ("Length of string=%d",n);
    getch();
}
