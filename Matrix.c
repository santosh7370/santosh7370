#include<stdio.h>
#include<conio.h>
int main()
{
int a[10][10],b[10][10],sum[10][10],i,j,r,c;
printf("enter the number of row:\n");
scanf("%d",&r);
printf("enter the number of column:\n");
scanf("%d",&c);
printf("enter the element of first matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n enter the element[%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}
}
printf("enter the element of second matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\n enter the element[%d][%d]:",i,j);
scanf("%d",&b[i][j]);
}
}
printf("\n\n element in the first matrix are:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++);
{
printf("\t%d",a[i][j]);
}
printf("\n");
}
printf("\n\n element in the second matrix are:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t%d",b[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
sum[i][j]=a[i][j]+b[i][j];
}
printf("\n\n sum of two matrix are:\n");
for(i=0;i<r;i++);
{
for(j=0;j<c;j++)
{
printf("\t%d",sum[i][j]);
}
printf("\n");
}
return 0;
}
