#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,step=9;
clrscr();

scanf("%d",&n);
for(i=5;i>=1;i--)
{
  for(j=1;j<=n-i;j++)
  {
    printf("  ");
  }
  for(j=1;j<=step;j++)
  {
    printf("* ");
  }
  step-=2;
  printf("\n");
}

}