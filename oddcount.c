#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("Enter the  first number");
scanf("%d",&a);
printf("Enter the last number");
scanf("%d",&b);
for(i=a;i<=b;i++)
if(i%2!=0)
printf("%d",i);
getch();
}
