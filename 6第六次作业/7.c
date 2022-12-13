#include <stdio.h>
int main()
{
    char c;
    while ((c = getchar()) != '\n')
    {
       if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            putchar(c);
        }
    else
        {
           continue;
		}
   }
}
