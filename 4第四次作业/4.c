#include <stdio.h>
#include <math.h>
int main()
{
    int inp5t_1;
    printf ("Enter a number:");
    scanf ("%d", &inp5t_1);
    switch (inp5t_1)
    {
        case 1:
            printf ("%d%d%d", inp5t_1, inp5t_1, inp5t_1); break;
        case 2:
            printf ("%d%d%d", inp5t_1, inp5t_1, inp5t_1); break;
        case 3:
            printf ("%d%d%d", inp5t_1, inp5t_1, inp5t_1); break;
        case 4:
                printf ("%d%d%d", inp5t_1, inp5t_1, inp5t_1);
        break;
        default:
            printf("error\n");
    }
return 0;
}
