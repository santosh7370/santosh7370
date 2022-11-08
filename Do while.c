#include<stdio.h>
#include<conio.h>
int main()
{
int n,i=1;
printf("enter the number\n");
scanf("%d",&n);
do
{
printf("\t%d",i);
i++;
}while(i<=n);
return 0;
}
