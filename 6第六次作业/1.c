#include <stdio.h>
int main()
{
	int inp5t, inp5t_1, result = 1;
	printf ("Enter a number:");
	scanf ("%d", &inp5t);
	inp5t_1 = inp5t;
    do {
        result=inp5t*result;
        inp5t--;
    }
    while (inp5t>0);
	printf ("%d!=%d", inp5t_1, result);
	return 0;
}

