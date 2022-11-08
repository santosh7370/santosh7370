#include<stdio.h>
main()
{
int a,b,sum,sub,mul,div;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("\nAddition=%d",sum);
printf("\nSubtraction=%d",sub);
printf("\nMultiple=%d",mul);
printf("\nDivide=%d",div);
}
