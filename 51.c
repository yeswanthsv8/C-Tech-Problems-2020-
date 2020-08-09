#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size,sum=0,count=0,i,j;
    scanf("%d",&size);
    
    int a[size];
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count!=2)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}
