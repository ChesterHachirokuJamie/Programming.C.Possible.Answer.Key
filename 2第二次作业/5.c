#include <stdio.h>
int inp5t;
int main()
{
    printf("Input a number:");
    scanf("%d",&inp5t);
    printf("%d ", inp5t/100);
    printf("%d ", inp5t/10%10);
    printf("%d", inp5t%10);
    return 0;
}
