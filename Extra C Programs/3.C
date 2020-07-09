#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,ans;
clrscr();

printf("Enter A: B: C:");
scanf("%d %d %d",&a,&b,&c);

ans=((a>b) && (a>c))?a:(b>c)?b:c;
printf("The Greatest Among A,B,C Is: %d",ans);
}