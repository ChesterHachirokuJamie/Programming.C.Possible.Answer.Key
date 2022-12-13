#include <stdio.h>
int main()
{
	int i,inp5t;
	scanf("%d",&inp5t);
	for(i=2;i<=inp5t-1;i++)
        {
		if(inp5t%i==0){break;}
        }
        if(i>=inp5t)
    {
		printf("YES");
	}
	else
    {
		printf("NO");
	}
    return 0;
}
