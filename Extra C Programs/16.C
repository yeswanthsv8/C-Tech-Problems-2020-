#include<stdio.h>
#include<conio.h>

void main()
{
int rem,n,hu,fi,tw,te,f,t,o;
clrscr();

printf("Input the amount:");
scanf("%d",&n);

hu=n/100; //hu=3
rem=n%100;  //rem=75

fi=rem/50; //fi=1
rem=rem%50; //rem=25

tw=rem/20; //tw=1
rem=rem%20; //rem=5

te=rem/10; //te=0
rem=rem%10; //rem=5

f=rem/5;  //f=1
rem=rem%5;  //rem=0

t=rem/2;
rem=rem%2;

o=rem/1;
rem=rem%1;

printf("\nThere are:\n");
printf("%d Note(s) of 100.00\n",hu);
printf("%d Note(s) of 50.00\n",fi);
printf("%d Note(s) of 20.00\n",tw);
printf("%d Note(s) of 10.00\n",te);
printf("%d Note(s) of 5.00\n",f);
printf("%d Note(s) of 2.00\n",t);
printf("%d Note(s) of 1.00\n",o);
}
