#include<stdio.h>
#include<conio.h>

void main()
{
int h,oc;
clrscr();

printf("Enter Hexadecimal Number:");
scanf("%X",&h);

printf("Conversion of HexNum in Different Formats Is:");
printf("%x\n",h);
printf("%d\n",h);
printf("%o\n",h);

printf("Enter Octal Number:");
scanf("%o",&oc);

printf("Conversion of OctNum in Different Formats Is:");
printf("%x\n",oc);
printf("%d\n",oc);
printf("%X",oc);
}


