#include<stdio.h>
#include<conio.h>
void main()
{
int number[2],n,data,i,flag=0;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the element\n");
for(i=0;i<n;i++)
scanf("%d",&number[i]);
printf("Enter the element to be searched\n");
scanf("%d",&data);
for(i=0;i<n;i++)
{
if(number[i]==data)
{
flag=1;
break;
}
}
if(flag==1)
printf("\n data found at location %d");
else
printf("data not found");
}
