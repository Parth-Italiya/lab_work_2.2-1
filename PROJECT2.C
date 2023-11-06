#include<stdio.h>
#include<conio.h>

void main()
{
int l,b,area;
clrscr();

printf("enter length of rectangle: ");
scanf("%d",&l);

printf("enter breadth of rectangle: ");
scanf("%d",&b);

area=l*b;
printf("area of rectangle is %d",area);

getch();
}