#include <stdio.h>
 int main()
{
    int m,count=0;
    for(m=1;m<=1000;m++)
    if(m%3==1&&m%5==2&&m%7==3)
    {
        printf("%5d",m);
        count++;
        if(count%5==0) printf("\n");
    }
 return 0;
 }
