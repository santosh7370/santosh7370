#include<stdio.h>
#include<string.h>
int main(int a[],int k,int n)
{
int j,loc,min;
min=a[k];
loc=k;
for(j=k;j<=n-1;j++)
if(min>a[j])
{
min=a[j];
loc=j;
}
return(loc);
}
    int main()
{
    int a[]={35,86,52,42,21,8,79,61};
    int k,temp;
    for(k=0;k<=6;k++)
    {
    loc=min(a,k,8);
    temp=a[k];
    a[k]=a[loc];
    a[loc]=temp;
    }
    for(k=0;k<=7;k++)
        printf(" %d",a[k]);
    getch();
}
