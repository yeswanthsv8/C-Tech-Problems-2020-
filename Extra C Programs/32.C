#include<stdio.h>
#include<conio.h>

void main()
{
int n,num=65,i,j;
clrscr();

scanf("%d",&n);
for(i=1;i<=n;i++)
{
  for(j=1;j<=i;j++)
  {
    printf("%c ",num);
  }
  num++;
  printf("\n");
}

}