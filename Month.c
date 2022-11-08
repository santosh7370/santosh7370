#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter a number of month 1 to 12\n");
scanf("%d",&n);
switch(n)
{
case 1:printf("JANUARY");
break;
case 2:printf("FEBRUARY");
break;
case 3:printf("MARCH");
break;
case 4:printf("APRIL");
break;
case 5:printf("MAY");
break;
case 6:printf("JUNE");
break;
case 7:printf("JULY");
break;
case 8:printf("AUGUST");
break;
case 9:printf("SEPTEMBER");
break;
case 10:printf("OCTOBER");
break;
case 11:printf("NOVEMBER");
break;
case 12:printf("DECEMBER");
break;
default:printf("Invailed Entry");
}
return 0;
}
