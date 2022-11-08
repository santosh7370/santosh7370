#include<stdio.h>
#include<conio.h>
struct employee
{
char name[50];
float salary;
struct data
{
int date;
int month;
int year;
}doj;
}
emp={"santosh",50000.00,{05,07,2025}};
int main()
{
printf("\nEmployee name %s",emp.name);
printf("\nEmployee salary %f",emp.salary);
printf("\nEmployee doj %d/%d/%d",emp.doj.date,emp.doj.month,emp.doj.year);
return 0;
}
