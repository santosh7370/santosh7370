#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[])
{
int j,p;
printf("Enter the element\n");
scanf("%d",&a[]);
for(p=1;p<a[];p++)
{
tmp=a[p];
for(j=p;j>0&&tmp<a[j-1];j--)
a[j]=a[j-1];
a[j]=tmp;
printf("%d",a[j]);
}
printf("%d",p);
}
