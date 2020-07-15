#include<stdio.h>
#include<conio.h>

void main()
{
int i=0,j,rem,n,a[40],c=0,flag=0;
clrscr();

scanf("%d",&n);
while(n>0)
{
  rem=n%10;
  a[i++]=rem;
  n/=10;
  c++;
}

i=0;
j=c-1;

while(i<j)
{
  rem=a[i];
  a[i]=a[j];
  a[j]=rem;
  i++;
  j--;
}

for(i=0;i<c;i++)
{
 if(a[0]<a[1])
 {
   if(i<c-1)
   {
      if(a[i]+1!=a[i+1])
      {
	 flag=1;
      }
   }
 }
 else
 {
    if(i<c-1)
   {
      if(a[i]-1!=a[i+1])
      {
	 flag=1;
      }
   }
 }

}

if(flag==0 && a[0]<a[1])
{
  printf("Increasing fancy number");
}
else if(flag==0)
{
  printf("Decreasing fancy number");
}
else
{
  printf("Not fancy number");
}

}