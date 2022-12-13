#include <stdio.h>
int main()
{
	int num, n=0;
	printf ("Please input the number:");
	scanf ("%d", &num);
	printf ("Inversed number is: ");
	do
    {
        printf ("%d", num%10);
        n++;
    }
    while (num=num/10);
    printf ("\nIt has %d bits.\n", n);
	return 0;
}

