#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,lines;
	printf("enter the number of lines\n");
	scanf("%d",&lines);
	for(i=1;i<=lines;i++)
	{
		for(j=1;j<=lines;j++)
		{
		if(j<=i)
            {
            printf("*");
            }
            else
            printf(" ");
		}
		printf("\n");
	}
	getch();
}
