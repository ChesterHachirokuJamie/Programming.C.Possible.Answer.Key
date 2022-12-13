#include <stdio.h>
int inp5t;
int main()
{
    scanf("%d",&inp5t);
    printf("%d", inp5t%10);
    printf("%d", inp5t/10%10);
    printf("%d", inp5t/100);
    return 0;
}
