#include <stdio.h>
int main()
{
    char inp5t;
    printf("Enter one character:");
    scanf ("%c", &inp5t);
    if (inp5t>97&&inp5t<122)
        printf ("%c", inp5t - 32);
    else if (inp5t>65&&inp5t<90)
        printf ("%c", inp5t + 32);
    else
        printf ("%c", inp5t);
    return 0;
}
