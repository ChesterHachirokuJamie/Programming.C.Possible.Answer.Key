#include <stdio.h>
int main()
{
    int a, n, i;
    int s=0;
    int temp =0;
	printf ("Input a&n:");
	scanf ("%d%d", &a, &n);
    for (i = 1; i<=n; i++)
    {
       temp =temp * 10 + a;
       s = s + temp;
    }
    printf ("s=%d", s);
	return 0;
}
