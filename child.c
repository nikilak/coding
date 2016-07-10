#include<stdio.h>
#include<conio.h>
int  main()
{
char c,name[10];
int temp,i,j,n,no_of_ch,no_of_day,ascii=97,day;
printf("\n Enter the n value");
scanf("%d",&n);
no_of_ch=2*n;
no_of_days=2*n-1;
for(i=0;i<no_of_ch;i++)
{
name[i]=ascii;
ascii++;
days=no_of_days;
j=2*n-1;
while(days!=0)
{
printf("\n Children pair for day %d",days);
for(i=0;i<2*n;i++)
{
printf("\c %c and %c",name[i],name[j]);
j--;
}
for(i=0;i<2*n;i++)
{
if(i==0)
{
temp=name[i]
}
name[i]=name[i+1];
if(i==(2*n)-1)
{
name[i]=temp;
}
days--;
}
}
return 0;
}
