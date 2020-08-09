#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count=0,i,j,k=0,a[20],ip1,ip2,size=0,start=1,out=0;
    scanf("%d %d",&ip1,&ip2);
    
    for(i=start;i<=ip1;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            a[k++]=i;
            size++;
        }
    }

        k=0;
        while(k<size)
        {
            if(ip2%a[k]==0)
            {
                ip2=ip2/a[k];
                k=0;
                out++;
            }
            else
            {
                k++;
            }
            if(ip2==1)
            {
                k=size+1;
            }
           
        }
        if(ip2==1)
        {
            printf("%d",out);
        }
        else
        {
            printf("-1");
        }
    return 0;
}
