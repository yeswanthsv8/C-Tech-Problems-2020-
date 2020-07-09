#include<stdio.h>
#include<conio.h>

void main()
{
int n,i=1,j;
clrscr();

printf("Input:");
scanf("%d",&n);

while(i<=n)
{
   j=1;
   while(j<=i)
   {
     printf("%d",i);
     j++;
   }
   printf("\n");
   i++;
}

}


