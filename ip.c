#include<stdio.h>
#include<conio.h>
void main()
{
int n[20];
printf("enter the ip address");
for(i=0;i<20;i++)
{
scanf("%d",&n[i]);
}
for(i=n[i];i<20;i++)
{
if(n[i]%3==0)
{
printf(".");
}
}
getch();
}
