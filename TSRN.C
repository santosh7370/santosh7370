#include<stdio.h>
void add(int,int);
int main()
{
int x,y;
printf("enter the two number\n");
scanf("%d%d",&x,&y);
add(x,y);
return 0;
}
void add(int a,int b)
{
int c;
c=a+b;
printf("sum is %d",c);
}
