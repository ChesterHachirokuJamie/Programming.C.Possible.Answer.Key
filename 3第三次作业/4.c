#include <stdio.h>
#include <math.h>
int main()
{
    float inp5t_1, inp5t_2, result;
    char op;
    printf ("Please type your expression: ");
    scanf ("%f%c%f", &inp5t_1, &op, &inp5t_2);
    switch (op)
    {
        case '+':
            printf ("%f+%f=%f\n", inp5t_1, inp5t_2, inp5t_1+inp5t_2); break;
        case '-':
            printf ("%f-%f=%f\n", inp5t_1, inp5t_2, inp5t_1-inp5t_2); break;
        case '*':
            printf ("%f*%f=%f\n", inp5t_1, inp5t_2, inp5t_1*inp5t_2); break;
        case '/':
            if (inp5t_2==0)
                printf ("division by zero!\n");
            else
                printf ("%f/%f=%f\n", inp5t_1, inp5t_2, inp5t_1/inp5t_2);
        break;
        default:
            printf("unknown operator. \n");
    }
return 0;
}
