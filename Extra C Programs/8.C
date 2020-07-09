#include<stdio.h>
#include<conio.h>

void main()
{
int *a,i,n,flag=0;
clrscr();

printf("Enter Size:");
scanf("%d",&n);

printf("Enter Array Elements:");
a=(int*)malloc(sizeof(int)*n);

for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("The Array Elements Are:");
for(i=0;i<n;i++)
{
  printf("%d ",a[i]);
}
printf("\nThe Even Numbers Are:");
for(i=0;i<n;i++)
{
  if(a[i]%2==0)
  {
    flag=1;
    printf("%d ",a[i]);
  }
}
if(flag==0)
{
  printf(" NULL.");
}

}

