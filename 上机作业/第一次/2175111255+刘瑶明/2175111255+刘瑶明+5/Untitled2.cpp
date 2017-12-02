#include <stdio.h>
#include <math.h>
int main ()
{
	float x,a,y,z;
	printf("请输入x,底数a 中间以逗号隔开\n");
	scanf("%f,%f",&x,&a);
	z=x*x+1;
	y=log(x+sqrt(z))/log(a);
	printf("%f",y);
	return 0;
}
