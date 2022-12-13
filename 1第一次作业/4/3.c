#include <stdio.h>

int main()
{
    int Type_Input, i;
    int Results = 1;
	scanf ("%d", &Type_Input);
	for (i=1;i<=Type_Input;i++)
	Results = Results * i;
	printf ("%d\n", Results);
	return 0;
}
