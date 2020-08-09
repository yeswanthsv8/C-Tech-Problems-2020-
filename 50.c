#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,sum=0,r,c;
    scanf("%d %d",&r,&c);
    
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<r-1;i++)
    {
       for(j=1;j<c-1;j++)
       {
            sum=sum+a[i][j];
       }
    }
    if(sum>0)
    {
       printf("%d",sum); 
    }
    else
    {
       printf("-1");
    }
    return 0;
}
