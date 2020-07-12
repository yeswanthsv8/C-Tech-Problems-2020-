#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,num=65;
clrscr();

scanf("%d",&n);
for(i=5;i>=1;i--)
{
  for(j=1;j<=i;j++)
  {
    printf("%c ",num);
  }
  if(i>=4)
  {
    num++;
  }
  else
  {
    num--;
  }
  printf("\n");
}

}