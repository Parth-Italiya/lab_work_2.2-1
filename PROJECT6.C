#include<stdio.h>
#include<conio.h>

void main()
{
int english,physics,chemistry,maths,hindi,gujarati,computer,pt;
float avg,pr;

clrscr();

printf("enter marks of english: ");
scanf("%d",&english);
printf("enter marks of physics: ");
scanf("%d",&physics);
printf("enter marks of chemistry: ");
scanf("%d",&chemistry);
printf("enter marks of maths: ");
scanf("%d",&maths);
printf("enter marks of hindi: ");
scanf("%d",&hindi);
printf("enter marks of gujarati: ");
scanf("%d",&gujarati);
printf("enter marks of computer: ");
scanf("%d",&computer);
printf("enter marks of pt: ");
scanf("%d",&pt);

avg=(english+physics+chemistry+maths+hindi+gujarati+computer+pt)/8;
pr=(avg*100)/800;

printf("avg is %f\n",&avg);
printf("pr is %f",&pr);

getch();
}