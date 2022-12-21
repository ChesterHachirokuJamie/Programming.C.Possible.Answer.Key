#include <stdio.h>
#define N 100
int main()
{
    int n;
    int a[N];
	printf ("Input length (N<=100):\n");
	scanf ("%d", &n);
	int max, min;
	for (int i=1; i<=n; i++)
        scanf ("%d", &a[i]);
        max = a[1];
        min = a[1];
        for (int i=1; i<=n; i++)
        {
            if (a[i]>max)
                max = a[i];
            else if (a[i]<min)
            min = a[i];
        }
        printf ("The max is %d\n", max);
        printf ("The min is %d", min);
	return 0;
}

