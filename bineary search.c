#include<stdio.h>
#include<conio.h>
 void main()
{
int number[25],n,data,i,flag=0,low,high,mid;
printf("Enter the number of elements \n");
scanf("%d",&n);
printf("Enter the element is ascending order \n");
for(i=0;i<n;i++)
scanf("%d",&number[i]);
printf(" Enter the element to be search\n");
scanf("%d",&data);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(number[mid]==data)
{
flag=1;
break;
}
else
{
if(number[mid]>data)
high=mid-1;
else
low=mid+1;
}
}
if(flag==1)
printf("\n data found location %d",mid+1);
else
printf("\n data not found");
}
