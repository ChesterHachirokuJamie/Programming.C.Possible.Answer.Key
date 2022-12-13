#include <stdio.h>
char inp5t;
int main()
{
    printf("Input a lowercase letter:");
    inp5t = getchar();
    printf("A capital letter:");
    putchar(inp5t - 32);
    return 0;
}
