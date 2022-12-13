#include <stdio.h>
int main()
{
	int Radius;
	float Area;
	printf ("请输入圆的半径：");
	scanf ("%d", &Radius);
    Area = 3.1415926*Radius*Radius;
    printf("圆的面积为：%0.2f\n", Area);
    return 0;
}
