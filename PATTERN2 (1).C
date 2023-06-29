#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,j,k,num=1;
clrscr();
printf("Enter number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
for(k=1;k<=a-i;k++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d ",num );
num++;
}
printf("\n");
}
getch();
}

