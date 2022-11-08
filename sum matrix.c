#include<stdio.h>
#include<conio.h>
int main()
{
int r,c,i,j,first[10][10],second[10][10],sum[10][10];
printf("enter the number of row\n");
scanf("%d",&r);
printf("enter the number of column\n");
scanf("%d",&c);
printf("\tenter the elements of first matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n enter the element[%d][%d]:",i,j);
scanf("%d",&first[i][j]);
}
printf("\n");
}
printf("\tenter the element of second matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n enter the element[%d][%d]:",i,j);
scanf("%d",&second[i][j]);
}
printf("\n");
}
printf("sum of entered matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum[i][j]=first[i][j]+second[i][j];
printf("%d\t",sum[i][j]);
}
printf("\n");
}
return 0;
}
