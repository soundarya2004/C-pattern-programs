#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,j;
clrscr();
printf("Enter number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("* ");
	}
printf("\n");
}
getch();
}