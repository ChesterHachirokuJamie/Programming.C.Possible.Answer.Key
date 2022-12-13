#include <stdio.h>
int main()
{
	int inp5t, EvenNum = 0, OddNum = 0, EvenTemp = 0, OddTemp = 0;
	float AvgEven, AvgOdd;
	do
    {
        scanf ("%d", &inp5t);
        if (inp5t%2==0&&inp5t!=0)
            {
                EvenNum++;
                EvenTemp = EvenTemp + inp5t;
            }
        else if (inp5t%2!=0)
        {
            OddNum++;
            OddTemp = OddTemp + inp5t;
        }
	}
    while (!inp5t==0);
    AvgEven = EvenTemp/EvenNum;
    AvgOdd = OddTemp/OddNum;
    printf ("Number of even:%d;", EvenNum);
    printf ("Average of even:%.2f\n", AvgEven);
    printf ("Number of odd:%d;", OddNum);
    printf ("Average of odd:%.2f\n", AvgOdd);
	return 0;
}
