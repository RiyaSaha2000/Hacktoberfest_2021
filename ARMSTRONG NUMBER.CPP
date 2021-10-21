#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,r,c;
clrscr();
printf("enter the given number: ");
scanf("%d",&n);
t=n;
r=0;
while(n>0)
{
c=n%10;
r=r+(c*c*c);
n=n/10;
}
if(t==r)
printf("the given number is armstrong number");
else
printf("the number is not armstrong number");
getch();
}