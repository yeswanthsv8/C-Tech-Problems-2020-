#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,sum=0;
clrscr();

scanf("%d",&n);
for(i=1;i<=n;i++)
{
  printf("%d ",i*i);
  sum=sum+i*i;
}
printf("\n%d",sum);
}
