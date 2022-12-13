#include<stdio.h>
int main()
{
   int n,m =0,s,r;
   scanf("%d",&n);
   s = n;
   while(s != 0)
   {
	   r = s %10;     
	   m = 10*m+r;   
	   s = s/10;      
   }
   if(m==n)
	   printf("%d是回文\n",n);
   else
	   printf("%d不是回文\n",n);
}