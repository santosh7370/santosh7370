#include<stdio.h>
#include<conio.h>
int main()
{
char name[50];
int rollno;
float sub1,sub2,sub3,sub4,sub5;
printf("enter the student of name\n");
scanf("%s",&name);
printf("enter the student of rollno\n");
scanf("%d",&rollno);
prinf("enter the student of sub1,sub2,sub3,sub4,sub5\n");
scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
score=(sub1+sub2+sub3+sub4+sub5)%100;
}
