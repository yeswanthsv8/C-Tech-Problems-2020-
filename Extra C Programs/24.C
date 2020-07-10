#include<stdio.h>
#include<conio.h>

void main()
{
int i,v,d,m,y,l,b,sm=0,sd=0,sy=0,dn=0,sl=0;
char str[40];
clrscr();

scanf("%d-%d-%d",&d,&m,&y);
scanf("%s",str);

l=m%10;
b=m/10;
sm=l+b;

l=d%10;
b=d/10;
sd=l+b;
if(sd>=10)
{
   l=sd%10;
   b=sd/10;
   sd=l+b;
}

while(y>0)
{
   l=y%10;
   y=y/10;
   sy=sy+l;
}
if(sy>=10)
{
   l=sy%10;
   b=sy/10;
   sy=l+b;
}
sl=sm+sd+sy;

if(sl>=10)
{
  l=sl%10;
  b=sl/10;
  sl=l+b;
}

printf("Life path number : %d",sl);

for(i=0;i<strlen(str);i++)
{
   if(str[i]=='a' || str[i]=='A' || str[i]=='j' || str[i]=='J' || str[i]=='s' || str[i]=='S')
   {
      v=1;
   }
   else if(str[i]=='b'|| str[i]=='B' || str[i]=='k'|| str[i]=='K' || str[i]=='t'|| str[i]=='T')
   {
      v=2;
   }
   else if(str[i]=='c'|| str[i]=='C' || str[i]=='l'|| str[i]=='L' || str[i]=='u'|| str[i]=='U')
   {
      v=3;
   }
   else if(str[i]=='d'|| str[i]=='D' || str[i]=='m' || str[i]=='M'|| str[i]=='v'|| str[i]=='V')
   {
      v=4;
   }
   else if(str[i]=='e'|| str[i]=='E' || str[i]=='n'|| str[i]=='N' || str[i]=='w'|| str[i]=='W')
   {
      v=5;
   }
   else if(str[i]=='f'|| str[i]=='F' || str[i]=='o'|| str[i]=='O' || str[i]=='x'|| str[i]=='X')
   {
      v=6;
   }
   else if(str[i]=='g'|| str[i]=='G' || str[i]=='p'|| str[i]=='P' || str[i]=='y'|| str[i]=='Y')
   {
      v=7;
   }
   else if(str[i]=='h'|| str[i]=='H' || str[i]=='q'|| str[i]=='Q' || str[i]=='z'|| str[i]=='Z')
   {
      v=8;
   }
   else
   {
      v=9;
   }
   dn=dn+v;
}
if(dn>=10)
{
  l=dn%10;
  b=dn/10;
  dn=l+b;
}
printf("\nDestiny number : %d",dn);

if(sl==dn)
{
  printf("\nLucky");
}
else
{
  printf("\nNot Lucky");
}
}
