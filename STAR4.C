#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,n,k;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(k=1;k<=n-r;k++)
{
printf(" \t ");
}
for(c=1;c<=r;c++)
{
printf("*\t\t");
}
printf("\n");
}
for(r=1;r<=n;r++)
{
for(k=1;k<=n-2;k++)
{
printf(" \t ");
}
for(c=1;c<=n-2;c++)
{
printf("*\t\t");
}
printf("\n");
}

getch();
}