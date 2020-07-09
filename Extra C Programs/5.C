#include<stdio.h>
#include<conio.h>

void main()
{
int id,unit;
char name[20];
float sur,bill,ch;
clrscr();

scanf("%d ",&id);
gets(name);
scanf("\n%d",&unit);

if(unit<=199)
{
  ch=1.2;
  bill=unit*1.2;
}
else if(unit>=200 && unit<400)
{
  ch=1.5;
  bill=199*1.2+(unit-199)*1.5;
}
else if(unit>=400 && unit<600)
{
  ch=1.8;
  bill=199*1.2+200*1.5+(unit-399)*1.8;
}
else
{
  ch=2;
  bill=199*1.2+200*1.5+200*1.8+(unit-599)*2;
}


if(bill>400)
{
 sur=bill*0.15;
 bill=bill+sur;
}

else if(bill<100)
{
 bill=100;
}

printf("\nCustomer IDNO: %d",id);
printf("\nCustomer Name: %s",name);
printf("\nUnit Consumed: %d",unit);
printf("\nAmount Charges @Rs.%.1f per unit:%.2f",ch,bill);
}
