#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0,j,temp,ip,c=0,rem,a[20];
    scanf("%d",&ip);
    
    if(ip<0)
    {
        ip=-1*(ip);
    }
    
    i=0;
    while(ip>0)
    {
        rem=ip%10;
        a[i++]=rem;
        ip=ip/10;
        c++;
    }
    if(c==1)
    {
        printf("-1");
    }
    else if(c>5)
    {
        printf("9");
    }
    else
    {
        for(i=0;i<c;i++)
        {
            for(j=i+1;j<c;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=c-1;i>=0;i--)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}
