#include <stdio.h>
int main()
{
	int m, n, x, y;
    printf ("Input m,n:");
	scanf ("%d %d", &m, &n);
	if (n<1||m<1)
    {
        printf ("Input again!\n");
        scanf ("%d %d", &m, &n);
        goto here;
    }
    else
    {
        here:x=m;
        y=n;
        int  temp=0;
        while(n!=0)
        {
            temp=m%n;
            m=n;
            n=temp;
        }
        printf ("%d��%d�����Լ��:%d\n", x, y, m);
        printf("%d��%d����С������:%d", x, y, x*y/m);
    }
	return 0;
}

