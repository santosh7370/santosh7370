#include<stdio.h>
#include<conio.h>
int main()
{
int k,i;
printf("enter the number\n");
scanf("%d",&i);
k=sum(i);
printf("%d",k);
}
int sum(int a)
{
int s;
if(a==1)
return 1;
s=a+sum(a-1);
return s;
}
