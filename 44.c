#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,a[20],rem,tw,th,fi,hu,ip;
    scanf("%d",&ip);
    
    tw=ip/2000;
    a[0]=tw;
    rem=ip%2000;
    
    th=rem/1000;
    a[1]=th;
    rem=rem%1000;
    
    fi=rem/500;
    a[2]=fi;
    rem=rem%500;
    
    hu=rem/100;
    a[3]=hu;
    rem=rem%100;
    
    if(rem>0)
    {
       hu=-1;
    }
    if(hu==-1)
    {
        for(i=0;i<4;i++)
        {
            a[i]=-1;
        }
    }
    printf("[");
    for(i=0;i<4;i++)
    {
        printf("%d",a[i]);
        if(i<=2)
        {
            printf(",");
        }
    }
    printf("]");
    return 0;
}
