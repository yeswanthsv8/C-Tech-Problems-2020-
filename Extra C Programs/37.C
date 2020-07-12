#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j;
clrscr();

scanf("%d",&n);

for(i=n;i>=65;i--)
{
  for(j=65;j<=i;j++)
  {
    printf("%c ",j);
  }
  printf("\n");
}

}
