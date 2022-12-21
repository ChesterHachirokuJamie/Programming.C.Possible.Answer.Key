#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int i, a, k, m;
	int temp =1;
	for (i = 1; i <= 1000; i++)
	{
		a = i;
		a *= a;
		k = log10((double)i)+ 1;
		for (m = 1; k; k--)
			m *= 10;
		a %= m;
		if (a == i)
		{

			if (temp<=5)
            {
            printf("%6.d", i);
            temp ++;
            }
            else if (temp==6)
            {
                printf ("\n");
                printf("%6.d", i);
                temp ++;
            }
            else printf("%6.d", i);
		}
	}
	return 0;
}

